/*3.10. Саставити програм за одређивање сигнум функције и исписивање резултата за унети реалан
број х.

y=sgn(x)=(-1, x<0)
         (0, x=0)
         (1, x>0)*/

#include<stdio.h>
int main(){
    float x;
    printf("Unesite broj x=");
    scanf("%f",&x);
    if(x>0){
        printf("Rezultat ce biti=1\n");
        }
        else if(x<0){
            printf("Rezultat ce biti=-1\n");
            }
            else{
                printf("Rezultat ce biti=0\n");

            }
            return 0;
               
            

}

