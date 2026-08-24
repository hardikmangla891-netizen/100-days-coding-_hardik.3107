//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main() {
    int n;
    int i;
    int p=1;
    printf("enter a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        p = p*i;
        if(i==n){
            printf("\nthe factorial of this number is %d" , p);
        }
    }
    return 0;
}