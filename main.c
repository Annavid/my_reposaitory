#include <stdio.h>

int matrix_multiplication(int s , int t , int n , int y[n][n] , int x[n][n]) {
    int i, j, ans = 0 , k=0 , l=0 ;
    for(i=s , j=t ; l < n && k<n ; k++ , l++)
        ans += y[i][l] * x[k][j];
    return ans;
}
int main() {
    int n , i , j , k , a , b;
    scanf("%d", &n);
    int x[n][n] , y[n][n] , z[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n ; j++) {
            scanf("%d",&x[i][j]);
            y[i][j] = x[i][j];
        }
    }
    scanf("%d %d %d", &a, &b, &k);
    if(k==1) {
        int s, t;
        if (x[a - 1][b - 1] == 0) {
            while (z[a - 1][b - 1] == 0) {
                for (s = 0; s < n; s++){
                    for (t = 0; t < n; t++){
                        z[s][t] = matrix_multiplication(s, t, n, y, x);
                        y[s][t] = z[s][t];}}
            }
            printf("%d", z[a - 1][b - 1]);
        } else
            printf("%d", x[a - 1][b - 1]);
    }
    else{
        int s , t;
        while (k>1){
            for(s=0 ; s<n ; s++)
                for(t=0 ; t<n ; t++)
                    z[s][t] = matrix_multiplication(s , t , n , y , x);
            k --;
            for(s=0 ; s<n ; s++)
                for (t = 0; t < n; t++)
                    y[s][t] = z[s][t];
        }
        printf("%d", z[a-1][b-1]);
    }
    return 0;
}