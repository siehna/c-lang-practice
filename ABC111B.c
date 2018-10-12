#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    //aが111で割れるまでインクリメントループ
    while(a%111) a++;
    printf("%d", a);
    return 0;
}
