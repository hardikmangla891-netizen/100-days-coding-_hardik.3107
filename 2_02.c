//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main() {
    int r;
    printf("insert the value of radius\n");
    scanf("%d", &r);
    float c = 3.14;
    float a = c*r*r;
    float p = 2*c*r;
    printf("the circumference of circle is %f\n", p);
    printf("the area of circle is %f", a);
    return 0;
}