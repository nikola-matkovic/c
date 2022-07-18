// 3.16. Саставити програм за налажење уније, пресека и разлике два скупа реалних бројева. Скупове
// сместити у динамичку зону меморије.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    system("clear");
    int *A,*B,*presek, *unija, *ArazlikaB, *BrazlikaA;
    int nA, nB, nPresek, nUnija, nArazlikaB, nBrazlikaA;
    printf("Unesite duzinu za A:");
    scanf("%d",&nA);
    printf("Unesite  elmente za A\n");
    A = (int*)malloc(nA*sizeof(int));
    for(int i = 0; i < nA; i++){
        scanf("%d",&A[i]);
    }
    printf("Unesite duzinu za B:");
    scanf("%d",&nB);
    printf("Unesite  elmente za B\n");
    B = (int*)malloc(nB*sizeof(int));
    for(int i = 0; i < nB; i++){
        scanf("%d",&B[i]);
    }
    //unija
    printf("Unija: \n");
    nUnija = nA;
    unija = (int*)malloc(nUnija*sizeof(int));
    for(int i = 0; i < nA; i++){
        unija[i] = A[i];
    }    
    for(int j = 0; j < nB; j++){
        int trenutniBroj = B[j];
        bool vecUnet = false;
        for(int i = 0; i < nUnija; i++){
            if(trenutniBroj == unija[i]){
                vecUnet = true;
                break;
            }
        }
        if(!vecUnet){
            nUnija++;
            unija = (int*) realloc(unija, nUnija*(sizeof(int)));
            unija[nA++] = B[j];
        }
    }
    for(int i = 0; i < nUnija; i++){
        printf("%d", unija[i]);
    }
    //presek
    printf("Presek: \n");
    nPresek = 1; 
    presek = (int*)malloc(nPresek*sizeof(int));
    for(int i = 0; i < nA; i++){
        int element = A[i];
        bool nadjen = false;
        for(int j = 0; j < nB; j++){
            if(element == B[j]){
                nadjen = true;
                break;
            }
        }
        if(nadjen){
            presek[nPresek  - 1] = element;  
            nPresek ++; 
            presek = (int*) realloc(presek, nPresek*(sizeof(int)));
        }
    }
    int * pom = (int*)malloc( (nPresek - 1)  * sizeof(int));
    for(int i = 0; i < (nPresek-1) ; i++){
        pom[i] = presek[i];
    }
    for(int i = 0; i < nPresek - 1; i++){
        printf("%d", pom[i]);
    }
    //
    return 0;
}