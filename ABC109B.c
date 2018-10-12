#include <stdio.h>

int main(){
    int flag=0;
    int num;
    scanf("%d", &num);
    //入力値読み込み(2次元配列)
    char house[100][10];
    int i,j;
    for(i=0;i<num;i++){
        for(j; j<10; j++){
            scanf("%s",house[i][j]);
        }
    }
    //判別処理
    if(duplication()==1||shiritori(num,house[i][j])==1) flag = 1;
    //出力
    if(flag) printf("No");
    else printf("Yes");
    return 0;
}

//ここが分からない！
//重複判定処理関数 重複があったら1を返す
int duplication(){
    int pip = 0;
    if(pip) return 1;
    else return 0;
}

//しりとり判定関数 しりとりが成立していなければ1を返す
int shiritori(int num,char words[][9]){
    int pip = 0;
    int i;
    for(i=0; i < num-1; i++){
        if(words[i+1][0]!=words[i][9]){
            pip=1;
            break;
        }
    }
    if(pip) return 1;
    else return 0;
}