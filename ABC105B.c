#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    //処理
    int i,j;//i:ドーナツの数 j:ケーキの数
    for(i=0;i<=25;i++){
        for(j=0; j<=14; j++){
            if(n==(4*i+7*j)){//組み合わせが見つかったら終了
                 printf("Yes");
                 return 0;
            }
        }
    }
    printf("No");
    return 0;
}