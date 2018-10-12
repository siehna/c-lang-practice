#include<stdio.h>

int main(){
    int n, flag;
    scanf("%d",&n);
    //処理
    int i,j;//i:4 j:7
    for(i=0;i<=25;i++){
        for(j=0; j<=14; j++){
            if(n==(4*i+7*j)) flag++;
        }
    }
    if(flag) printf("Yes");
    else printf("No");
    return 0;
}