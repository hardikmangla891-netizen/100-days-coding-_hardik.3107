//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>

int main()
{
    int a;
    int b; printf("insert the value of a and b\n");
    scanf("%d %d", &a , &b);
    int c = a + b;
    printf("sum of a and b is %d", c);

    return 0;
}