#include <stdio.h>

int main(){
    //読み取り
    int a;
    int ans;
    scanf("%d",&a);
    if(a%2==0){
        ans = (a/2)*(a/2);
        printf("%d",ans);
    }else{
        ans = ((a+1)/2) * ((a-1)/2);
        printf("%d",ans);
    }
    return 0;
}