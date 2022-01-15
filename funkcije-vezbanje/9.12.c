/*9.12. Саставити програм којим се исписују сви троцифрени бројеви (ако их има) који су једнаки
суми факторијела својих цифара. */

#include<stdio.h>
int faktorijal(int n){
    int i,s=1;
    for(i=1;i<=n;i++){
        s*=i;
    }
    return s;
}
int suma_faktorijala(int n){
    int prva_cifra, druga_cifra,treca_cifra,s;
    
    prva_cifra=n%10;
    druga_cifra=(n%100)/10;
    treca_cifra=n/100;
    s=faktorijal(prva_cifra)+faktorijal(druga_cifra)+faktorijal(treca_cifra);
    return s;
    }
int main(){
    int i;
        for(i=100;i<1000;i++){
            if(suma_faktorijala(i)==i){
                printf("%d",i);
            }

        }
        return 0;
}