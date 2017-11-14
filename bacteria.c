#include <stdio.h>

int f (int i , int j , int k , int x[10][10][10]){
    int ans;

    return ans;
}

int main () {
    int x[10][10][10] , i , j , k ;
    for (i=0 ; i<10 ; i++)
        scanf("%d", &x[i][0][0]);
    for (j=1 ; j<10 ; j++)
        scanf("%d", &x[0][j][0]);
    for (k=1 ; k<10 ; k++)
        scanf("%d", &x[0][0][k]);
    for (i = 0; i < 10 ; ++i) {
        for (j = 0; j < 10; ++j) {
            for (k = 0; k < 10; ++k) {
                x[i][j][k] = f(i , j , k );
            }
        }
    }
}