#include <stdio.h>
#include <string.h>
//ポインタで元のTを操作する
void charRot(char enT[],int length);

int main(void){
    char S[101]="tokyo",T[101]="kyoto";
    //scanf("%s %s",S, T);
    //Tの文字列長さ取得
    int Tlength = -1;
    while(T[++Tlength] != '\0');
    //for(Tlength=0;T[Tlength]!='\0';Tlength++);
    //処理
    int i, flag=0;
    char* pt = T;
    for(i=0; i<Tlength; i++){//一致したらフラグ立ててbreak
        if(strcmp(S,T)==0) flag++;
        charRot(pt, Tlength);
        if(flag) break;
    }
    if(flag) printf("Yes\n");
    else printf("No\n");
    return 0;
}
//最初の文字を一番後ろに移動させる関数
void charRot(char enT[], int length){
    char temp = enT[0];
    int i;
    for(i = 0; i < length-2; i++) enT[i] = enT[i+1];
    enT[length-1] = temp;
    return;
}
