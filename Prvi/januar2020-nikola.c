/* u programskom jeziku c napisati strukturu programa za sumiranje prostih brojeva.
najprre uneti maksimalnu sumu a potom unositi cele brojeve . sumirati samo proste brojeve
dok njihova suma ne postane veća od zadate maksimalne sume.  
prikazati dobijenu sumu .
*/


#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
int main(){
    int maksimalnaSuma, suma = 0, broj;
    printf("unesite maksimalnu sumu :");
    scanf("%d", &maksimalnaSuma);
    printf("\n");
    while(suma < maksimalnaSuma){
        scanf("%d", &broj);
        bool flag = true;
        for(int i = 2; i < broj; i++){
            if(broj % i == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            suma = suma + broj;
        }
        printf("%d  %d \n", maksimalnaSuma, suma);
    }
    printf("%d ", suma);
    return 0;
}