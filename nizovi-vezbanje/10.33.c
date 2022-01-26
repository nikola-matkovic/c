#include<stdio.h>
int main(){
    int n,i,broj, prvi, srednji, zadnji, zastava=0;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    printf("Uneti broj koji se pretrazuje:");
    scanf("%d",&broj);
    prvi = 0;
    zadnji = n-1;
    while (prvi <= zadnji){
        srednji = (prvi + zadnji) / 2;
        if(niz[srednji] == broj ){
            zastava = 1;
            printf("%d",srednji);
            break;
        }
        else if (broj < niz[srednji]){
            zadnji = srednji - 1;
        }
        else if(broj > niz[srednji]){
            prvi = srednji + 1;
        }
    }
    if(!zastava){
        printf("nisam pronašao element");
    }
    return 0;
    
}