/*10.32. Саставити програм који за унети низ целих бројева, дужине n, проналази позицију траженог
елемента или исписује обавештење да тражени елемент не постоји у низу. Користити методу
Линеарног претраживања:
а) без употреба функција;
б) коршћењем функције која линеарно претражује низ. */

#include<stdio.h>
int main(){
    int n,i,broj;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    printf("Uneti broj koji se pretrazuje:");
    scanf("%d",&broj);
    for(i=0;i<n;i++){
        if(broj==niz[i]){
            printf("%d",broj);
        }
        else{
            printf("Trazeni broj ne postoji u nizu\n");
        }
        
    }
    return 0;
    
}