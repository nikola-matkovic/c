// б) Саставити структуру која садржи податке о раднику (име, презиме и месецна плата),
// затим у главном програму користећи ову структуру унети податке о раднику и исписати исте. 

#include<stdio.h>
#include<stdlib.h>

typedef struct radnik{
    char *ime;
    char *prezime;
    int plata;
}RADNIK;

int main(){
    struct radnik Radnik;
printf("Unsite ime radnika:");
scanf("%s",Radnik.ime);
printf("Uneste prezime radnika:");
scanf("%s",Radnik.prezime);
printf("Uneste platu radnika:");
scanf("%d",&Radnik.plata);

//Ispis
printf("%s %s ima %d platu",Radnik.ime,Radnik.prezime,Radnik.plata);
    return 0;
}