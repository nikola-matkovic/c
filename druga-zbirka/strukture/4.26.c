// 4.26. Структура radnik садржи податке о имену, презимену, броју радних сати и плати радника.
// Саставити програм за повећање плате n радника према проведеном радном времену на послу. Месец
// има 160 радних сати. За прековремени рад од 20 сати месечно повишица је 15%, за прековремени рад
// од 30 сати је 25%. Исписати списак радника са свим подацима који добијају повишицу. 

#include<stdio.h>
#include<string.h>

#define SIZE 100

typedef struct radnik{
    char ime[30];
    char prezime[30];
    int brojRadnihSati;
    int plata;
}RADNIK;

int main(){
    struct radnik radnici[SIZE];
    int i,n;
    int ukupniSatiuMesecu = 160;
    int povisica;
    int procenat;
    printf("Unesi broj radnika:");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        printf("\nUnesi ime:");
        scanf("%s",radnici[i].ime);
        printf("\nUnesi prezime:");
        scanf("%s",radnici[i].prezime);
        printf("\nUnesi brojRadnihSati:");
        scanf("%d",&radnici[i].brojRadnihSati);
        printf("\nUnesi platu:");
        scanf("%d",&radnici[i].plata);
    }
    
    for(i = 0; i < n;i++){
        printf("%s %s je radio %d sati ovog meseca i ima platu %d eura\n",radnici[i].ime,radnici[i].prezime,radnici[i].brojRadnihSati,radnici[i].plata);
    }
    for(i = 0; i < n;i++){
        
        if(radnici[i].brojRadnihSati > ukupniSatiuMesecu){
            povisica = radnici[i].brojRadnihSati - ukupniSatiuMesecu;
            if(povisica % 20 == 0){
                radnici[i].plata = radnici[i].plata + radnici[i].plata * 15 / 100; 
            }
            if(povisica % 30 == 0){
                radnici[i].plata = radnici[i].plata + radnici[i].plata * 25 / 100; 
            }
            if(povisica % 30 == 0 && povisica % 20 == 0){
                radnici[i].plata = radnici[i].plata + radnici[i].plata * 25 / 100; 
            }
            printf("Plata %s sa povisicom iznosi: %d\n",radnici[i].ime,radnici[i].plata);
        }   
    }
    return 0;
}