// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main()
{
    int n;
    int i;
    printf("enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("the binary is 0");
    }
    else
    {
    
    for (i = 1; n > 0; i++)
    {
        int binary = 0;
        int place = 1;
        while (n > 0)
        {
            i = n % 2;
            binary = binary + i*place;
            place = place * 10;
            n = n / 2;
        }

        printf("%d", binary);
    }
    }
    return 0;
}