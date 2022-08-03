/*DRŽAVNI UNIVERZITET U NOVOM PAZARU OSNOVI PROGRAMIRANJA

II KOLOKVIJUM Π

1. Sastaviti program koji će učitati niz od N prirodnih brojeva. Zatim se ispisuju sve Niz je u ravnoteži ako je zbir elemenata do tog indeksa (P)
jednak zbiru elemanta kombinacije uradvnoteženog niza nakon njega. (0 <P<N) Na primer: ako je dat niz A od 8 elemenata (-1, 3, 4, 5, 1, -6, 2, 1)
Za P-1 niz je u ravnoteži jer: Za P-3 niz je u ravnoteži jer: Alociranje memorije za niz odraditi dinamički, a proveru da li je niz na indeksu Pu
ravnoteži odraditi pomoću funkcije koja vraća 1 ako jeste, 0 ako nije u ravnoteži na

indeksu P. 

-1 3 -4 5 1 -6 2 1

2. Sastaviti program koji formira matricu realnih brojeva dienzija mxn. Program treba da izračuna koliko postoji elemenata matrice koji su jednaki aritmetičkoj sredini svojih

suseda i ispiše njihove pozicije u matrici. Unos matrice i izračunavanje odraditi

pomoću funkcija.

3. Formirana je datoteka VRATA DAT sa podacima o sastavu ulaznih vrata. Svaki zapis sadrži informacije: šifra modela vrata, površinu vrata napravljenu od plastike, površinu vrata napravljenu od drveta površinu vrata napravljenu od stakla. Unesite podatke o ceni kvadratnog metra plastike, drveta stakla sa standardnog ulaza. Pročitati datoteku i odštampati ukupan broj vrata koja su 100% od drveta. Izračunati cene za svaki model vrata i upisati u novu datoteku CENE.DAT -Sifra modela vrata i njegovu cenu. Ispisati na standardnom izlazu cenu 1 najjeftinijih vrata.

30.12.2021.god.

Prof. dr Bratislav Mirić
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int main(){
    int i,n;
    int p,temp1,temp2,temp3;
    int semafor = 1;
    printf("Uneiste n:");
    scanf("%d",&n);
    int *niz;
    // int *nizP;
    niz = (int*)malloc(n*sizeof(int));
    printf("Unesite elemente niza:\n");
    for(i = 0;i < n;i++){
        scanf("%d",&niz[i]);
    }

    
    printf("Unesite indeks P:");
    scanf("%d",&p);
    printf("P niz je :\n");

    // nizP = (int*)malloc(p*sizeof(int));


    
    
    for(i = 0; i < p; i++){
        // nizP[p] = niz[i]
        
       temp1 = niz[i] + niz[i + 1];
    //    printf("kada se saberu prvi i drugi Temp 1:%d \n",temp1);
     
       
        // printf("niz[p + 1]:%d \n",niz[i + 1]);
        temp1 += niz[i + 2];
        //  printf("Temp kada se sabere sa trecim temp1:%d\n ",temp1);
       

    }
      for(i = 4; i < n; i++){
        temp2 = niz[i] + niz[i + 1];
        printf("Temp2 prvi i derugi :%d\n\n",temp2);
        temp3 = temp2;
        temp3 = temp3 + niz[i + 2];
      

        printf("Temp2 sa trecim: %d\n\n",temp2);
        
    }
   
    printf("Temp1 = %d\n",temp1);
    printf("Temp2 = %d\n",temp2);
    if(temp1 == temp2){
        semafor = 1;
    }
    else if(temp1 != temp2){
        semafor = 0;
    }
    if(semafor == 1){
        printf("Niz je u ravnotezi\n");
    }
    else if(semafor == 0){
        printf("Niz nije u ravnotezi\n");
    }

    return 0;
}

