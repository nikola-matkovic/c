/*3.4.
Саставити програм који за три унета цела броја исписује највећи.*/

#include<stdio.h>

int main(){
    int a,b,c;
    printf("\nUnesite broj a=");
    scanf("%d",&a);
    printf("\nUnesite broj b=");
    scanf("%d",&b);
    printf("\nUnesite broj c=");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("\nBroj %d je najveci\n",a);
    }
    else if(b>a && b>c){
        printf("\nBroj %d je najveci\n",b);
    }
    else{
        printf("\nBroj %d je najveci\n",c);
    }
    return 0;


}