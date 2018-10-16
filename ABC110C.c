#include<stdio.h>

int compare(char *, char *, int);

int main(){
    int length, i;
    char A[200001], B[200001];

    scanf("%s %s", A, B);

    //配列の長さを取得
    //while(A[length++] != '\0'); 初期値 length = -1
    length = sizeof(A) / sizeof(A[0]);

    if(compare(A,B,length)) printf("No");
    else printf("Yes");

    return 0;
}

//判定関数
int compare(char *A, char *B, int length){
    //a~zまでの探索と全ての配列要素の探索
    for(int alpha = 97;alpha < 123 ; alpha++){
        int charDiffA = 100;
        int charDiffB = 100;
        int checkA = 100;
        int checkB = 100;
        for(int i=-1; i<length; i++){
            if(alpha==A[i]){
                //異なる差を持つ配列の組が存在したら検出する
                charDiffA = abs(A[i] - B[i]);
                if(charDiffA<100 && checkA !=100 && checkA != charDiffA){
                    return 1;
                }
                checkA = charDiffA;
            }
            if(alpha==B[i]){
                //異なる差を持つ配列の組が存在したら検出する
                charDiffB = abs(A[i] - B[i]);
                if(charDiffB<100 && checkB !=100 && checkB != charDiffB){
                    return 1;
                }
                checkB = charDiffB;
            }
        }
    }
    return 0;
}
