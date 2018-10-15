#include <stdio.h>

int main(){
    int a, min = 1000,num;
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        scanf("%d", &a);
        if(min>a) min=a;
    }
    printf("%d\n", min);
    return 0;
}