#include <ncurses.h>
#include "tel.h"
#define MAX_MENU	5

int main(void)
{
	initscr();
	cbreak();
	noecho();

	int yMax, xMax; 
	getmaxyx(stdscr, yMax, xMax);

	WINDOW *menuwin = newwin(8, xMax-85, 25, 5); 
	box(menuwin, 0, 0);
	refresh();
	wrefresh(menuwin);

	keypad(menuwin, true);

	char *choices[MAX_MENU] = {"search", "add", "delete", "update", "show all"}; 
	int choice;
	int highlight = 0;

	while (1) {
		for (int i = 0; i < MAX_MENU; i++) {
			if (i == highlight)
				wattron(menuwin, A_REVERSE); 
			mvwprintw(menuwin, i+1, 1, choices[i]);
			wattroff(menuwin, A_REVERSE);
		}
		choice = wgetch(menuwin);

		switch (choice) {
			case KEY_UP:
				if (highlight != 0)
					highlight--;
				break;
			case KEY_DOWN:
				if (highlight != MAX_MENU-1)
					highlight++;
				break;
			default:
				break;
		}
		if (choice == 10)
			break;
	}
	switch (highlight) {
		case 0:
			tel_search();
		case 1:
			tel_add();
		case 2:
			tel_del();
		case 4:
			tel_update();
		case 5:
			tel_print();
	}
	return 0; 
}
