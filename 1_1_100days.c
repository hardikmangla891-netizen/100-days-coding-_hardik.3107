// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    printf("the sum is %d\n", s);
    int m = a * b;
    printf("the product is %d\n", m);
    int d = a - b;
    printf("the difference is %d\n", d);
    float r;
    if (b != 0)
    {
        float r = (float)a / (float)b;
        printf("the quoteint is %f\n", r);
    }
    else
    {
        printf("division by zero is not allowed\n");
    }

    return 0;
}