#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

//Moj nacin

int main(){
    int broj,temp,brojCifara = 0,temp2,temp3;
    int niz[SIZE],i;
    int parniBrojevi = 0,neparniBrojevi = 0;
    printf("Unesite broj:");
    scanf("%d",&broj);
    temp = broj;
    temp2 = broj;
   
    while(temp != 0){
        temp = temp / 10;
        brojCifara++;
    }
    int obrnutiBroj = 0;
    while(temp2 != 0){
        obrnutiBroj = (obrnutiBroj * 10) + (temp2 % 10);
        temp2 = temp2 / 10;
    }

    temp3 = obrnutiBroj;
   

     
        for(i = 0;i < brojCifara;i++){
        obrnutiBroj = obrnutiBroj % 10;
        niz[i] = obrnutiBroj;
        temp3 = temp3 / 10;
        obrnutiBroj = temp3;
        }
        
        

    printf("Niz brojeva je:\n");
 
    for(i = 0;i < brojCifara;i++){
        printf("%d",niz[i]);
    }
    printf("\n");
    for(i = 0;i < brojCifara;i++){
        if(i % 2 == 0){
            neparniBrojevi += niz[i];
        }
        else{
            parniBrojevi += niz[i];
        }
    }
    printf("Parni brojevi %d\nNeparni brojevi: %d\n", parniBrojevi,neparniBrojevi);

    if(parniBrojevi == neparniBrojevi){
        printf("Broj je savrsen\n");
    }
    else{
        printf("Broj nije savrsen\n");
    }



    return 0;
}