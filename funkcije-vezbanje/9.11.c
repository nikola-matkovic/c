/*9.11. Саставити програм који за дато n рачуна и исписује суму S = 1! + 2! + 3! + ... + n!. За
рачунање факторијела користити одговарајућу функцију. */

#include <stdio.h>

int suma_faktorijala(int n){
    int i,s=1;
    for(i=1;i<=n;i++){
        s*=i;
       
    }
    return s;
}
int main(){
    int n,s=0,i;
    printf("Unesite neki broj:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
         s+=suma_faktorijala(i);
         }
    
    printf("Suma faktorijala od %d je =%d",n,s);
    return 0;
}
