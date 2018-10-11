#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d", &a);
    //100の位 10の位 1の位に分ける
    c = a - (a/10)*10;
    b = (a - (a/100)*100 - c)/10;
    a = a/100;
    //処理
    if(a<b) printf("%d",(a+1)*100+(a+1)*10+(a+1));
    else if(a>b) printf("%d",a*100+a*10+a);
    else if(a==b){
        if(a==c) printf("%d",a*100+a*10+a);
        else if(a>c) printf("%d",a*100+a*10+a);
        else printf("%d",(a*1)*100+(a+1)*10+(a+1));
    }
    return 0;
}
