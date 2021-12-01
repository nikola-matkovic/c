#include <stdio.h>

int main(){
    int n, m, a, b, c;
    printf("unesite prirodan trocifren broj : ");
    scanf("%d", &n);
    a= n/100;
    b= (n%100)/10;
    c= n%10;
    ///987
    if(a>b){
        a=a^b;
        b=a^b;
        a=a^b;
    }
    if(a>c){
        //moja metoda za zamenu:
        a=a^c;
        c=a^c;
        a=a^c;
    }
    if(b>c){
        //moja metoda za zamenu:
        b=b^c;
        c=b^c;
        b=b^c;
    }
    m=a*100+b*10+c;
    printf("Najmanja moguća trocifrna cifra od brojva%d, %d, %d je %d",a,b,c,m);
    return 0;
}