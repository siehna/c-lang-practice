#include <stdio.h>

int main(){
    int n, m, X, Y, i, j;
    scanf("%d %d %d %d", &n, &m, &X, &Y);
    int x[101],y[101];
    x[0] = X;
    y[0] = Y;
    for(i=1; i<n+1; i++) scanf("d",x[i+1]);
    for(i=1; i<m+1; i++) scanf("d",y[i+1]);
    for(i=0; i<n+1;i++){
        for(j=0; j<m+1; j++){
            if(y[j]-1<=x[i]){
                printf("War");
                return 0;
            }
        }
    }
    printf("No War");
    return 0;
}