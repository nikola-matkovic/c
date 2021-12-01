/*Саставити програм за израчунавање средње вредности унетих реалних бројева. Користити
број 0 као STOP кôд за крај учитавања*/

#include<stdio.h>
int main(){
    double s=0,a,as;
    printf("Unesite broj a:");
    scanf("%d",a);
    while(a=!0){
        a++;
        s+=a;
        if(a==0){
            printf("Zaustavi program");
        }
        else
        a=s/a;
        printf("Aritmeticka sredina je=%f");     
    }
    return 0;
}