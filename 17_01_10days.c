//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main()
{
    int num, original, temp;
    int count = 0, remainder;
    int sum = 0, power;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    
    for (temp = num; temp != 0; temp = temp / 10)
    {
        count++;
    }

    
    if (num == 0)
        count = 1;

    
    for (temp = num; temp != 0; temp = temp / 10)
    {
        remainder = temp % 10;
        power = 1;

        
        for (int i = 1; i <= count; i++)
        {
            power = power * remainder;
        }

        sum = sum + power;
    }

    if (sum == original)
        printf("%d is an Armstrong number", original);
    else
        printf("%d is not an Armstrong number", original);

    return 0;
}