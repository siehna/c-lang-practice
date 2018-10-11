#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//ポインタで元のTを操作する
void charRot(char enT[],int length);

int main(void){
    char S[101],T[101];
    scanf("%s %s",S, T);
    //Tの文字列長さ取得
    int Tlength;
    for(Tlength=0;T[Tlength]!='\0';Tlength++);
    //処理
    int i, flag=0;
    char* pt = T;
    for(i=0; i<Tlength; i++){
        if(strcmp(S,T)==0) flag++;
        charRot(pt, Tlength);
        if(flag) break;
    }
    if(flag) printf("Yes");
    else printf("No");
    return 0;
}
//最初の文字を一番後ろに移動させる関数
void charRot(char enT[], int length){
    char temp = enT[0];
    int i;
    for(i = 0; i < length; i++) enT[i] = enT[i+1];
    enT[length-2] = temp;
    enT[length-1] = '\0';
    return;
}
