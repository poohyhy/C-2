#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLINES 5000
#define ALLOCSIZE 1000000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
char *lineptr[MAXLINES];

char *alloc(int n)
{
	if (allocbuf + ALLOCSIZE - allocp >= n) {
		allocp += n;
		return allocp - n;
	}
	else
		return 0;
}

void afree(char *p)
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

void swap(char *v[], int i, int j)
{
	char *tmp;
	tmp = v[i];
	v[i] = v[j];
	v[j] = tmp;
}

void myqsort(char *v[], int left, int right, int (*comp)(void *, void *))
{
	int i, last;
	void swap(char *v[], int i, int j);
	if ( left >= right)
		return;
	swap(v, left, (left+right)/2);
	last = left;
	for(i = left+1; i <= right; i++)
		if((*comp)(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	myqsort(v, left, last-1, comp);
	myqsort(v, last+1, right, comp);
}

int mygetline(char *s, int lim)
{
	int c;
	char *t = s;
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
		*t++ = c;

	if (c == '\n')
		*t++ = c;

	*t = '\0';
	return t - s;
}

int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLINES];

	nlines = 0;
	while((len = mygetline(line, MAXLINES)) > 0)
		if(nlines >= maxlines || (p = alloc(len)) == NULL)
			return -1;
		else {
			line[len-1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}
void writelines(char *lineptr[], int nlines)
{
	for(int i = 0; i < nlines; i++)
		printf("%s\n", lineptr[i]);
}

int numcmp(char *s1, char *s2)
{
	double v1, v2;
	v1 = atof(s1);
	v2 = atof(s2);
	if(v1 < v2)
		return -1;
	else if(v1 > v2)
		return 1;
	else
		return 0;
}

int main(int argc, char *argv[])
{
	int numeric = 0;
	int nlines;

	if(argc > 1 && strcmp(argv[1], "-n") == 0) {
		numeric = 1;
	}
	if((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		myqsort( lineptr, 0, nlines-1, (int (*)(void*,void*))(numeric ? numcmp : strcmp));
		printf("\nAfter sort.\n");
		writelines(lineptr, nlines);
		return 0;
	}
	else {
		printf("input too big to sort\n");
		return 1;
	}
}
