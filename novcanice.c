#include <stdio.h>
#include <stdlib.h>

int  main(){
    int cena, n1, n2, n5, n10, n20, n50, n100, n200, n500, n1000, n2000, n5000, temp;
    printf("Unesite cenu:");
    scanf("%d", &cena);
    temp=cena;
    if(temp>=5000  && temp!=0){
        n5000=temp/5000;
        temp%=5000;         // temp=temp%5000;  
    }else{
        n5000=0;
    }
    if(temp>=2000 && temp!=0){
        n2000=temp/2000;
        temp%=2000; 
    }else
        n2000=0;
    if(temp>=1000  && temp!=0){
        n1000=temp/1000;
        temp%=1000; 
    }else{
        n1000=0;
    }
    if(temp>=500 && temp!=0){
        n500=temp/500;
        temp%=500; 
    }else
        n500=0;
    if(temp>=200 && temp!=0){
        n200=temp/200;
        temp%=200; 
    }else
        n200=0;
    if(temp>=100 && temp!=0){
        n100=temp/100;
        temp%=100; 
    }else
        n100=0;
    if(temp>=50 && temp!=0){
        n50=temp/50;
        temp%=50; 
    }else
        n50=0;
    if(temp>=20 && temp!=0 ){
        n20=temp/20;
        temp%=20; 
    }else
        n20=0;
    if(temp>=10 && temp!=0){
        n10=temp/10;
        temp%=10; 
    }else
        n10=0;
    if(temp>=5  && temp!=0 ){
        n5=temp/5;
        temp%=5; 
    }else
        n5=0;
    if(temp>=2  && temp!=0){
        n2=temp/2;
        temp%=2; 
    }else
        n2=0;
    if(temp>=1  && temp!=0){
        n1=temp/1;
        temp%=1; 
    }
    else
        n1=0;
    printf("\n Cena za proizvod je %d \n", cena);
    printf("potrebno vam je: %d novcanica od 5000 dinara, %d novcanica od 2000 dinara,   \n ", n5000, n2000);
    printf("%d novcanica od 1000 dinara, %d novčanica od 500 dinara, %d novčanica od 200 dinara, ", n1000, n500, n200);
    printf("%d novcanica od 100 dinara, %d novčanica od 50 dinara, %d novčanica od 20 dinara, \n ", n100, n50, n20);
    printf("%d novcanica od 10 dinara, %d novčanica od 5 dinara, %d novčanica od 2 dinara, \n", n10, n5, n2);
    printf("i %d novčanica od 1 dinara", n1);
}