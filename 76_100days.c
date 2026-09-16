//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n, m, a[10][10];
    int symmetric = 1;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if(n != m) {
        printf("False");
        return 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = 0;
            }
        }
    }

    if(symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}