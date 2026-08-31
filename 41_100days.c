//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int last = n % 10;

    int divisor = 1;
    int temp = n;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    int first = n / divisor;

    int result = n - first * divisor - last + last * divisor + first;

    printf("%d\n", result);

    return 0;
}