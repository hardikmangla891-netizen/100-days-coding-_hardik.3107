//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>
int main() {
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    if (n>=0){
        if(n==0){
            printf("the number is zero");
        }
        else{
            printf("the number is positive and not zero");
        }
    }
    else {
        printf("the number is negative");
    }
    return 0;
}