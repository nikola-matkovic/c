/*3.2. Саставити програм који исписује обавештење да ли је унети број позитиван, негативан или је
једнак нули.*/

#include<stdio.h>

int main(){
    int broj;
    printf("Unesite broj:");
    scanf("%d",&broj);
    if(broj>0){
        printf("\nBroj je pozitivan\n");
    }
    else if(broj<0)
    {
        printf("\nBroj je negativan\n");

    }
    else 
    {

        printf("\nBroj je jednak nuli\n");
    }
        return 0;



}