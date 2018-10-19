/*
作成日：2018/10/18
作成者：木村友亮
*/
#include<stdio.h>
#include<string.h>

int compare(char *, char *, int);

int main(){
    int length, i;
    char A[200001], B[200001];
    scanf("%s %s", A, B);

    //配列の長さを取得
    length = strlen(A);

    if(compare(A,B,length)) printf("Yes\n");
    else printf("No\n");

    return 0;
}

//判定関数 引数は文字列2つと文字列の長さ
int compare(char *A, char *B, int length){
    //未利用のアルファベットを１とするフラグの配列（alphabet[0]をaとして扱う）
    int alphabet[26];
    for(int i=0; i<26; i++) alphabet[i]=1;

    for(int i=0; i<length; i++){
        //A[i]のアルファベットが未使用の場合、処理を行う
        if(alphabet[A[i] - 'a']){
            for(int j=i+1; j<length;j++){
                /*
                判定部分
                A[i]と同じ文字を持つA[j]が存在した場合
                Aの対になるBの文字同士も同じ文字でなくてはならない
                */
                if(A[i] == A[j]){
                    if(B[i] != B[j]) return 0;
                }
                //処理は非対称なのでBから見たA配列の文字の判定も必要
                if(B[i] == B[j]){
                    if(A[i] != A[j]) return 0;
                }
            }
            alphabet[A[i] - 'a'] = 0;
        }
        else;
    }
    return 1;
}
