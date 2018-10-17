#include<stdio.h>

int compare(char *, char *, int);

int main(){
    int length, i;
    char A[200001], B[200001];

    scanf("%s %s", A, B);

    //配列の長さを取得
    //while(A[length++] != '\0'); 初期値 length = -1 こちらの方が良いかも
    length = sizeof(A) / sizeof(A[0]);

    if(compare(A,B,length)) printf("No");
    else printf("Yes");

    return 0;
}

//判定関数
int compare(char *A, char *B, int length){
    //a~zまでの探索と全ての配列要素の探索
    int pair;
    int temp;
    for(int alphabet = 'a';alphabet < 'z'+ 1 ; alphabet++){
        for(int i=0; i<length; i++){
            if(alphabet==A[i]) pair = B[i];
        }
        for(int i=0; i<length; i++){
            if(alphabet==A[i]){
                temp = B[i];
                if(temp != pair) return 1;
            }
            if(alphabet==B[i]){
                temp = B[i];
                if(temp != pair) return 1;
            }
        }
    }
    return 0;
}
