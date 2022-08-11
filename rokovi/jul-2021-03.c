// 3. Napisati program koji na učitava datoteku DUNP DAT, koja sadrži podatke o studentima
// Državnog univerziteta u Novom Pazaru i to broj indeksa, e, prime, departman, studijski
// program, godina studija, prosek. Zatim se na standardnom izlazu ispisuju podaci o studentima
// studijskog programa i godine koje korisnik unosi sa tastature i to u sledećem formatu:

// Primer ako korisnik unese studijski program Softversko inženjerstvo i godinu studija prvu: Departman: Tehničke nauke

// Studijski program: Softversko inženjerstvo Godina studija: prva

// Spisak studenata: BROJ INDEKSA

// IME

// PREZIME

// PROSEK

// 02-005/2017 Anes

// 02-002/2017 Petar

// Mavric Samčević

// 9,84 69,14

// 02-010/2017 Kamber

// Kamberović 7,38

// Broj studenata na studijskom programu: 39 Prosečna ocena studenata: 7.87
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

typedef struct student{
    char ime[20];
    char prezime[20];
    char departman[30];
    char studijskiProgram[30];
    char godinaStudija[10];
    int brojIndeksa;
    float prosek;

}STUDENT;



int main(){
    FILE *DUNP;
    int i = 0,j;
    struct student Studenti[SIZE];
    DUNP = fopen("dunp.txt", "r");
    if(DUNP == NULL){
        printf("Greska");
        exit(1);
    }
   while(!feof(DUNP)){
    
    fscanf(DUNP,"%s %s %s %s %s %d %f",Studenti[i].ime,Studenti[i].prezime,Studenti[i].departman,Studenti[i].studijskiProgram,Studenti[i].godinaStudija,&Studenti[i].brojIndeksa,&Studenti[i].prosek);
    i++;

   }
   fclose(DUNP);
   DUNP = fopen("dunp.txt" ,"w");
   for(j = 0;j < i;j++){
    fprintf(DUNP,"Departman:%s Studijski program: %s Godina studija:%s \nBROJ INDEKSA:%d \nIME: %s \nPREZIME: %s \nPROSEK: %f ",Studenti[i].departman, Studenti[i].studijskiProgram,Studenti[i].godinaStudija,Studenti[i].brojIndeksa,Studenti[i].ime,Studenti[i].prezime,Studenti[i].prosek);
   } 
    

    
    return 0;
}