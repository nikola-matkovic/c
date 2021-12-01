/*2.28. Саставити програм који учитава вредност производа у динарима, а затим израчунава и
приказује колико је потребно новчаница од 500 дин., 100 дин. и 1 дин. за плаћање тог производа. */

#include<stdio.h>

int main(){
    int broj,n1,n2,n3,t;
    n1=500;
    n2=100;
    n3=1;
    printf("Unesite broj :");  // predpostavimo da smo uzeli 1763
    scanf("%d",&broj);
    t=broj/n1;
    printf("Novcanica od 500din se u vrednosti proizvoda nalazi %d puta\n",t);
    t=(broj%n1)/n2;
    printf("Novcanica od 100din se u preostaloj vrednosti proizvoda nalazi %d puta\n",t);
    t=((broj%n1)%n2);
    printf("Novcanica od 1din se u preostaloj vrednosti proizvoda nalazi %d puta\n",t);
    return 0;
    }



    
 



    

 

