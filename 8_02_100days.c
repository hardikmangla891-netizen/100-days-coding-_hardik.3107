//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("enter 3 numbers\n");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b , a>c){
        printf("the largest number is %d" ,a);
    }
    else if( b>a , b>c){
        printf("the largest number is %d", b);
    }
    else if(c>a , c>b){
        printf("the largest number is %d", c);
    }
    else{
        printf("all are equal");
    }
    return 0;
}