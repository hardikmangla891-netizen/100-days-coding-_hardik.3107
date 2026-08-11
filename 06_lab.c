//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>

int main() {
    int l;
    int b;
    printf("insert the value of length and breadth\n");
    scanf("%d %d", &l , &b);
    int a = l*b;
    printf("the area of rectangle is %d\n", a);
    int p = 2*(l+b);
    printf("the perimeter of rectangle is %d", p);
    return 0;
} 