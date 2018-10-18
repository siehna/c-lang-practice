#include<stdio.h>

int main(){
    int a,b,c,d,e,f,g,h,i;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&d,&e,&f);
    scanf("%d %d %d",&g,&h,&i);
    //斜めに足したものが等しければよい
    //x,y,zはそれぞれa1+a2+a3+b1+b2+b3となる
    int x = a+e+i;
    int y = b+f+g;
    int z = c+d+h;
    if(x==y && y==z) printf("Yes");
    else printf("No");
    return 0;
}
