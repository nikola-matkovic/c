#include  <stdio.h>

int main(){
    float gubitak,  distanca,  cena_goriva, potrosnja_g, potrosnja_o, potrosnja_as, procenat_zarade, placanje, zarada;
    cena_goriva=145.;
    potrosnja_g=8./100.;
    potrosnja_o=5.5/100.;
    potrosnja_as=(potrosnja_g+potrosnja_o)/2.;
    procenat_zarade=500;
    printf("Unesite pređeni put u kilometrima");
    scanf("%f", &distanca);
    gubitak = cena_goriva*distanca*potrosnja_as;
    placanje=gubitak+(gubitak/100.*procenat_zarade);
    zarada= placanje-gubitak;
    printf("Za  pređenih %.2f kilometara potrebno je  platiti %.2f dinara \nvaša zarada je  %.2f", distanca, placanje, zarada);
    
    return 0;
}