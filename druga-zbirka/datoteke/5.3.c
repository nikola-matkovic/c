// 5.3. Сваки ред датотеке brojevi.txt садржи по један цео број. Саставити програм који штампа
// најмањи и највећи цео број на екрану. 

#include<stdio.h>

#define SIZE 5

int main(){
    int br,i,min = 0,max = 0;
    FILE *datoteka;
    datoteka = fopen("brojevi.txt","w");
    if(datoteka == NULL){
        printf("Greska");
    }
    for(i = 0; i < SIZE; i++){
    fscanf(datoteka,"%d",&br);
    }
    fclose(datoteka);

    datoteka = fopen("brojevi.txt", "r");
    if(datoteka==NULL){
        printf("Greska");
    }
    if(br > max){
        max = br;
    }
    if(min < br){
        min = br;
    }
    printf("min je:%d\n maks je :%d",min,max);
    fclose(datoteka);
    


    return 0;
}