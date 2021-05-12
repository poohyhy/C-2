#include <stdio.h>
#include <math.h>

int main(void)
{
    struct point{
        int x;
        int y;
    };
    struct point pt1 = {10, 20};
    struct point pt2 = {30, 40};

    //find distance between pt1 and pt2
    //find area of rectangle made by pt1, pt2

    int xlen = pt2.x - pt1.x;
    int ylen = pt2.y - pt1.y;
    
    double length = sqrt(pow(xlen, 2) + pow(ylen, 2));
    int area = xlen * ylen;

    printf("거리: %f, 넓이: %d", length, area);
    return 0;
}
