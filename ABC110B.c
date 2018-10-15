#include <stdio.h>

int main(){
    int n, m, X, Y, i, x, y;
    scanf("%d %d %d %d", &n, &m, &X, &Y);
    int maxX = X;
    int minY = Y;
    for(i=0; i<n; i++){
        scanf("%d",&x);
        if(maxX<x) maxX = x;
    }
    for(i=0; i<n; i++){
        scanf("%d",&x);
        if(minY>y) minY = y;
    }
    if(maxX < minY) printf("War");
    else printf("No War");
    return 0;
}