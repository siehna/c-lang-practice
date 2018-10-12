#include <stdio.h>

void ans(int a,int b,int c);

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    ans(a,b,c);
    return 0;
}
//abcの順に大きさを並べ替える
void ans(int a,int b,int c){
    int max = 0;
    if(b<c){
        max = c;
        c = b;
        b = max;
    }
    if(a<b){
        max = b;
        b = a;
        a = max;
    }
    printf("%d", a*10+b+c);
}