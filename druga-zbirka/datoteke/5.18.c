// 5.18. Саставити програм којим се формирају три датотеке са низовима целих бројева. Број и
// елеменати низа се уносе са тастатуре, а затим се сви унети смештају у датотеку svi.txt, позитивни
// елементи у pozitivni.txt и негативни у negativni.txt. Имена датотека се уносе на главном улазу.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *svi;
    FILE *pozitivni;
    FILE *negativni;
    int i,n;

    svi = fopen("svi.txt", "r");
    pozitivni = fopen("pozitivni.txt", "w");
    negativni = fopen("negativni.txt", "w");
    if(svi == NULL || pozitivni == NULL || negativni == NULL){
        printf("Greska");
    }
    printf("Unesite n:");
    scanf("%d",&n);
    int broj[n];
    while(!feof(svi)){
    for(i = 0;i < n;i++){
        fscanf(svi, "%d", &broj[i]);
    }
    }
    while(!feof(svi)){
        for(i = 0;i < n;i++){
            if(broj[i] > 0){
                fprintf(pozitivni,"%d",broj[i]);
            }
            else{
                 fprintf(negativni,"%d",broj[i]);
            }
        }
    }
    fclose(svi);
    fclose(pozitivni);
    fclose(negativni);

    

    
    return 0;
}