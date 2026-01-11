#include <stdio.h>
#include <stdlib.h>

int main()
{
       int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
    int i,j;

    for(i=0;i<=13;i++){
        if(sayilar[i]%2==0){
            sayilar[i]=sayilar[i]+1;
        }
    }
    for(j=0;j<=13;j++){
        printf("%d ",sayilar[j]);
    }
    return 0;
}
