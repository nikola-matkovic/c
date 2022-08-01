// 5.10. Саставити програм који за унто n преписује n пута садржај датотеке podaci6.txt у датотеку
// podaci6NovoN.txt карактер по карактер. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 1000



int main(){
    FILE *prva;
    FILE *druga;
   char sadrzaj[SIZE];
   int n,i;
    prva = fopen("podaci6.txt", "r");
    druga = fopen("podaci6Novo.txt", "w");
    printf("Unesite n:");
    scanf("%d",&n);
    if(prva == NULL || druga == NULL){
        printf("Greska");
    }
    while(!feof(prva)){
      for(i = 0;i < n;i++){
        fgets(sadrzaj,SIZE,druga);
        fputs(sadrzaj,druga);
      }
    }
    fclose(prva);
    fclose(druga);



    return 0;
}