#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a==1)printf("Hello World");
    else if(a==2){
        int b,c;
        scanf("%d %d", &b, &c);
        printf("%d", b+c);
    }
    return 0;
}