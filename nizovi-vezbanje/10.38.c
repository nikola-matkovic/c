/*10.38. Саставити програм који за унети низ целих бројева дужине n формира и приказује нови низ
који је састављен од елемената без понављања унетог низа.*/

#include <stdio.h>

int main(){
    int i, n, a, j=0, brojElemenata=0, zastava;
    //unos niza
    printf("Unesite n:");
    scanf("%d",&n);
    int A[n], B[n];
    for(i = 0; i < n; i++){
        scanf("%d",&A[i]);
    }
    //stvaranje novog niza:
    for(i = 0; i < n; i++){ // prelai kroz sve elemente niza 
        zastava = 0;        // za svaki prepostavimo da nije našao isti
        for(j=0; j<brojElemenata; j++){ // proverava redukovani niz, da li se  element već nalazi u njemu 
            if(B[j]==A[i]){
                zastava = 1;            //ako se nalazi, postavlja zastavu na 1
                break;
            }
        }
        if(!zastava){                    //ako element nije pronađen u nizu, tj ako se ne ponavlja, upiše ga
            B[brojElemenata] = A[i];
            brojElemenata++;
        }
    }
    //ispis novog niza
    for(i = 0; i < brojElemenata; i++){
        printf("%d ", B[i]);
    }
    return 0;
}