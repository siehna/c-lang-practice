#include<stdio.h>

int main(){
    char O[50],E[50];
    for(int i=0;i<50;i++)O[i] = NULL;
    for(int i=0;i<50;i++)E[i] = NULL;
    scanf("%s %s",O,E);
    for(int i=0; i<50; i++) printf("%c%c", O[i], E[i]);
    printf("\n");
    return 0;
}