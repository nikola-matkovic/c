/*9.17. Саставити програм којим се исписују сви троцифрени Амстронгови бројеви. Троцифрени
број је Амстронгов ако је једнак суми кубова својих цифара. Формирати две функције, једна за
рачунање суме кубова, а друга за одређивање да ли је дати број Амстронгов (ако јесте враћа 1, ако
није враћа 0). */

#include <stdio.h>
#include <math.h>

int suma_kubova(int n){
    int prva, druga, treca, s;
    prva =  n / 100;
    druga = (n % 100) / 10;
    treca = n % 10;
    s = pow(prva, 3) + pow(druga, 3) + pow(treca, 3);
    return s;
    }

int proveri(int n){
    if(n == suma_kubova(n)){
        return 1;
    }
    return 0;
}

int main(){
    int n;
    for(int i=100; i<1000; i++){
       if(proveri(i)){
           printf("broj %d je Amstrongov \n", i);
        }
    }
    return 0;
}