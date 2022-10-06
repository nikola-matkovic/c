#include <stdio.h>
#include<stdlib.h>

#define MAX 100

int maksimanoAutomobila(int cene[MAX], int n, int budzet){
    int min = cene[0], suma = 0, brojAutomobila = 0, index;
    while(1){
        for(int i = 0; i < n; i++){
            if(cene[i] < min){
                min = cene[i];
                index = i;
            }
        }
        suma += min;
        if(suma > budzet || n == 0){
           break;
        }else{
            cene[index] = cene[n-1];
            n--;
            brojAutomobila++;
        }
    }
    return brojAutomobila;
}

int main(){
    int n, cene[MAX], budzet;
    printf("unesite dužinu niza: \n");
    scanf("%d", &n); 
    printf("unesite cene automobila: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &cene[i]);
    }
    printf("unesite budžet");
    scanf("%d", &budzet);
    int max = maksimanoAutomobila(cene, n, budzet);
    printf("Možete kupiti maksimalno %d  automobila", max);
    return 0;
}