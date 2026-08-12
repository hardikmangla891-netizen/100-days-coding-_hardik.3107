//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main() {
    int c;
    printf("enter the value of temprature in celcius\n");
    scanf("%d", &c);
    float f =  32 + 9*c/5;
    printf("the value of temprature in farenheit is %f", f);
    return 0;
}