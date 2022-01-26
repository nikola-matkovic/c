/*10.31. Саставити програм који исписује обавештење да ли учитани низ бројева одговара
Фибоначијевом низу. Низ бројева који се уноси мора имати најмање три елемента.
Фибоначијев низ: f1=1, f2=1, fi=fi-1+fi-2, i=3, 4, 5, ... */

#include<stdio.h>
int main(){
    int i,n,m,prva,druga,j;
     printf("Unesite n:");
     do{
          scanf("%d",&n);
     }
     while (n<3);
     int niz[n];
     for(i=0;i<n;i++){
         scanf("%d",&niz[i]);
     }
    prva=0;
    druga=1;
    printf("unesite n:");
    scanf("%i", &m);
    int sledeca;
    printf("%i %i", prva, druga);
    for(j=3; j<=n; j++){
        sledeca=prva+druga;
        prva= druga;
        druga=sledeca;
        printf("%i ", sledeca);
    }

    if(niz[i]==sledeca){
        printf("Niz je jednak fibonacijevom = %d",niz[i]);
    }
    return 0;
   
    
}







