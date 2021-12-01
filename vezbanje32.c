/*Ispisi sve brojeve vece od 100 manje od 200*/

#include<stdio.h>
int main(){
    int i;
    for(i=101;i<200;i+=2){
        printf("%d\n",i);
       }
    return 0;
}