#include <stdio.h>
#include<stdlib.h>

int main(){
    int vreme;

    scanf("%d", &vreme);
    if(vreme>24){
        printf("program ne radi");
    }
    else if (vreme > 7 && vreme <= 10){
        printf("Dobro jutro");
    }
    else if(vreme > 10 && vreme <=18){
        printf("Dobar dan");
    }
    else{
        printf
        ("Dobro vece");
    }
    return 0;
}