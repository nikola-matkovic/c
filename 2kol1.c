/* sastaviti program  koji učitava niz od N prirodnih brojeva, zatim se ispisuju sve kombinacije 
uravnoteženog niza.
niz je u ravnoteži ako je zbir elemenata do tog indeksa (p) jednak zbirku elemenata nakon njega 
(0<p<N)
npr:  Ako je dat niz  od 8 elemenata {-1, 3, -4, 5, 1, -6, 2, 1}
za p = 1 niz je u ravnoteži jer 
A[0]  = -1 = a[1]+a[2]+a[3]+a[4]+a[5]+a[7]
Za p = 3 niz  je uranvoteži jer 
a[0]+a[1]+a[2] = -2 = a[4]+a[5]+a[7]
#Alociranje memorije  za niz odraditi dinamički, a proveru da li je niz na indeksu p u ravnoteži odraditi
#pomoću funkcije koja vraća 1 ako jeste, 0 ako nije u  ravnoteži na indeksu P.*/
#include <stdio.h>

int main(){
    int n, p=0, l, d, sl, sd, i;
    printf("unesite n:");
    scanf("%d", &n);
    int niz[n];
    i=0;
    while(i<n){
        scanf("%d", &niz[i]);
        i++;
    }
    for(p=1;p<n; p++){
        sl=0;
        for(l=0; l<p; l++){
            sl += niz[l];
        }
        sd=0;
        for(d=n-2; d>p; d--){
            sd += niz[d];
        }
        if(sl == sd){
            printf("Niz je u ravnoteži za p = %d  jer je zbir sa leve i desne strane jednak %d\n", p, sl);
        }
    }
    return 0;
}