// 3. U svakoj liniji tekstualne datoteke ed.dat nalaze se podaci o prodaji kompakt
// diskova Linija se sastoji od više kolona međusobno razdvojenih dvotačkom. U prvoj
// koloni se nalazi naziv žanra CDa koji može biti jedna od vrednosti iz skupa (inostrana, novokomponovana,
// decija, klasicna U drugoj koloni je zadat broj prodatih primeraka za tekuću prodaju.
// U trećoj koloni dat je datum prodaje u obliku rednog broja izmedu 1 (početni dan interval prodaje)
// i30 (dan obrade podataka). Potom slede podaci o nabavnoj ceni. Ti podaci se sastoje od cene po primerku,
// ali za inostranu muziku dodatno se zadaje iznos carine PO UKUPNOJ KOLIČINI, dok za novokomponovanu muziku
// dodatne se PO PRIMERKU zadaje I imos poreza na land. Potom slede podaci o prodajnoj ceni. BROJ LINIJA
// U DATOTECI NIJE UNAPRED POZNAT Napisati program

#include<stdio.h>
#include<stdlib.h>


int main(){
    FILE *CD;
    fopen("cd.dat","r");
    
    return 0;
}