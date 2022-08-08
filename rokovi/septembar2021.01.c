// 1. Sa tastature se učitava prirodan broj n,
//i zatim n prirodnih brojeva među kojima su bar dva različita.
// Napisati program koji jednim prolaskom kroz niz određuje drugu po veličini vrednost.
// Na primer za pet brojeva 6, 6, 7, 6, 2 ispisuje: Druga po veličini vrednost je 6.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100

int main(){
    int n, niz[MAX];
    printf("Unesite prirodan broj n");
    scanf("%d", &n);
    bool imaRazlitice = false;
    do{
        printf("Unesite bar 2 različita broja:");
        for(int i = 0; i < n; i++){
            scanf("%d", &niz[i]);
        }
        for(int i = 0; i < n; i++){
            if(niz[i] != niz[0]){
                imaRazlitice = true;
                break;
            }
        }
    }
    while(!imaRazlitice);
    int max = niz[0];
    for(int i = 0; i < n; i++){
        if(niz[i] > max){
            max = niz[i];
        }
    }
    int drugi;
    for(int i = 0; i < n; i++){
        if(niz[i] != max){
            drugi = niz[i];
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if( niz[i] == max){
            continue;
        }
        if(niz[i] > drugi) {
            drugi = niz[i];
        }
    }
    printf("%d", drugi);
    return 0;
}