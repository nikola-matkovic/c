/*3.3. Саставити програм који за два унета цела броја исписује какав постоји релациони однос
између њих (једнаки су, први већи од другог или први је мањи од другог). */

#include<stdio.h>

int main(){
    int a,b;
    printf("Unesite prvi broj:\n");
    scanf("%d",&a);
    printf("Unesite drugi broj:");
    scanf("%d",&b);
    if(a==b){
        printf("Prvi i drugi broj su jednaki\n");

    }

    else if(a>b){
        printf("Prvi je veci od drugog\n");
    }

    else{
        printf("Prvi e manji od drugog");
    }
    return 0;
}  