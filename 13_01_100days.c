//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main() {
    float a;
    float b;
    char c;
    printf("enter an operator: ");
    scanf("%c" , &c);
    printf("enter any two numbers: ");
    scanf("%f %f", &a , &b);
    switch (c){
        case '+':
            printf("%f + %f = %f", a, b, a + b);
            break;
        case '-':
            printf("%f - %f = %f", a, b, a - b);
            break;
        case '*':
            printf("%f * %f = %f", a, b, a * b);
            break;
        case '/':
            printf("%f / %f = %f", a, b, a / b);
            break;
        case '%':   
            printf("%f %% %f = %f", a, b, (int)a % (int)b);
            break;
        default:
            printf("Error! operator is not correct");

    }
    return 0;
}