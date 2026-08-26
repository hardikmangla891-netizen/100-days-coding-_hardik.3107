// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main()
{

    int num, reverse = 0, remainder;
    printf("enter a number: ");
    scanf("%d", &num);
    int orignal = num;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (orignal == reverse)
    {
        printf("pallindrome");
    }
    else
    {
        printf("not pallindrome");
    }
    return 0;
}