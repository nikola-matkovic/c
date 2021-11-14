/*Саставити програм који исписује обавештење да ли је унети број позитиван,
негативан или је једнак нули.*/
#include <stdio.h>

int main(){
    int broj;
    scanf("%d", &broj);
    if(broj>0){
        printf("broj je pozitivan");
    }
    else if(broj<0){
        printf("broj je negativan");
    }
    else{
        printf("broj je jedank 0");
    }
    return 0;
}