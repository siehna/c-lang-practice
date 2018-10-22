#include<stdio.h>
#define MAX(X,Y) X>=Y?X:Y
#define MIN(X,Y) X<=Y?X:Y

int main(){
    double q, h, s, d, half, one, two, sum;
    double n;
    scanf("%le %le %le %le %le",&q,&h,&s,&d,&n);
    half = MIN(2*q,h);
    one = MIN(4*q,MIN(2h,s));
    two = MIN(8*q,MIN(4*h,MIN(2*s,d)));
    sum = two*n/2 + (double)(one*n%2) + half*n/0.5 +(double)(q*n%0.5);
    print("%d",(int)sum);
    return 0;
}