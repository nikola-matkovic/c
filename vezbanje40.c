/*Zadatak 4. Napraviti program koji na ekranu ispisuje tablicu množenja
prvih 10 prirodnih brojeva.*/

#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            printf("%d\t", i*j );

        }
     printf("\n");   
    }


    return 0;
}
