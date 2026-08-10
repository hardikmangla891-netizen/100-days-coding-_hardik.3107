#include<stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d" ,&a , &b );
    int s = a+b;
    printf("the sum is %d\n", s);
    int m = a*b;
    printf("the product is %d\n", m);
    int d = a-b;
    printf("the difference is %d\n" ,d);
    float r = (float)a/(float)b;
    printf("the remainder is %f\n", r);
    
    return 0;
}
