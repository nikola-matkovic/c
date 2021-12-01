/*3.5.
Саставити програм који три унета реална броја уређује у неопадајућем редоследу.*/

#include<stdio.h>


int main(){
    float a,b,c,t;
    printf("\nUnesite broj a=\n");
    scanf("%f",&a);
    printf("\nUnesite broj b=\n");
    scanf("%f",&b);
    printf("\nUnesite broj c=\n");
    scanf("%f",&c);
    if(a>b){
     a= a + b;
     b= a - b;
     a= a - b;
     }
     else if(b>c){
         b= b + c;
         c= b - c;
         b= b - c;
         }
         printf("Tri realne broja u neopadajucem redosledu glase:%2f %2f %2f",a,b,c);
         return 0;
}