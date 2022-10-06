// 2. Napisati strukturnu funkciju na programskom jeziku C koja pronalazi prosečnu vrednost elemenata niza
// X od n elemenata. U glavnom programu učitati kvadratnu matricu A dimenzija MxM i korišćenjem formirane funkcije
// odrediti kolonu sa minimalnom prosečnom vrednošću i kolonu sa maksimalnom prosečnom vrednošću. 
// Izvršiti zamenu mesta tih kolona u matrici. Prikazati matricu nakon transformacije

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

int main(){
    int niz[SIZE],n,i,j;
    int A[SIZE][SIZE],m;
    int suma = 0;
    int maks = 0,maks2;
    int min = 0;
    int temp = 0,temp2 = 0;
    int minPozicija = 0,maksPozicija = 0;
    printf("Unesite n:");
    scanf("%d",&n);
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite matricu:");
    for(i = 0;i < m;i++){
        for(j = 0;j < m;j++){
            scanf("%d",&A[i][j]);
        }
    }
     for(i = 0;i < m;i++){
        suma = 0;
        for(j = 0;j < m;j++){
           temp2+=A[j][i];
            niz[i] = temp2;
        }
        if(niz[i] > maks2){
            maks2 = niz[i];
        }
        temp = maks2;
     }
    min = temp;
    for(i = 0;i < m;i++){
        suma = 0;
        for(j = 0;j < m;j++){
           suma+=A[j][i];
            niz[i] = suma;
        }
        if(niz[i] > maks){
            maks = niz[i];
        }
        if(niz[i] < min){
            min = niz[i];
        }
        if(niz[i] == min){
            minPozicija = i;
            
        }
        if(niz[i] == maks){
            maksPozicija = i;
        }
    }
    printf("minpoz:%d\nmakspoz:%d",minPozicija,maksPozicija);
    for(i = 0;i < m;i++){
        for(j = 0;j < m;j++){
            A[i][minPozicija] = A[i][minPozicija] ^ A[i][maksPozicija];
            A[i][maksPozicija] = A[i][minPozicija] ^ A[i][maksPozicija];
            A[i][minPozicija] = A[i][minPozicija] ^ A[i][maksPozicija];
        }
    }
    printf("\nmaks:%d\n",maks);
      printf("\nmin:%d\n",min);
    
    for(int k = 0;k < m;k++){ 
        printf("%d ",niz[k]);
    }

    printf("Ispis novodobijene matrice:\n");
     for(i = 0;i < m;i++){
        for(j = 0;j < m;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}