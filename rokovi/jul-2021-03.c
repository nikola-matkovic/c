// 3. Napisati program koji na učitava datoteku DUNP DAT, koja sadrži podatke o studentima
// Državnog univerziteta u Novom Pazaru i to broj indeksa, ime, prime, departman, studijski
// program, godina studija, prosek. Zatim se na standardnom izlazu ispisuju podaci o studentima
// studijskog programa i godine koje korisnik unosi sa tastature i to u sledećem formatu:
// Primer ako korisnik unese studijski program Softversko inženjerstvo i godinu studija prvu:

// Departman: Tehničke nauke

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
#include<stdbool.h>
#include<string.h>

#define SIZE 100

typedef struct student{
    char index[10];
    char ime[30];
    char prezime[30];
    char departman[50];
    char smer[30];
    char godina[10];
    float prosek;
}STUDENT;

int main(){
    FILE *dunp = fopen("DUNP.txt", "r");
    if(dunp == NULL){
        printf("greška 1");
        exit(1);
    }
    int i = 0;
    STUDENT studenti[SIZE];
    char studijskiProgram[30];
    char godina[10];
    printf("unesite studijski prigram:");
    scanf("%s", studijskiProgram);
    printf("unesite godinu studija:");
    scanf("%s", godina);
    bool prviPut = true;
    int sumaOcena = 0;
    int brojStudenata = 0;
    while(!feof(dunp)){
        fscanf(dunp, "%s %s %s %s %s %s %f",  studenti[i].index, studenti[i].ime,studenti[i].prezime, studenti[i].departman, studenti[i].smer, studenti[i].godina, &studenti[i].prosek);
        if(strcmp(studenti[i].smer, studijskiProgram ) == 0 && strcmp(studenti[i].godina, godina ) == 0 ){
            if(prviPut){
                printf("departman: %s ", studenti[i].departman);
                printf("\n");
                printf("studijski program: %s ", studenti[i].smer );
                printf("\n");
                printf("Godina studija: %s ", godina);
                printf("\n");
                printf("Spisak studenata: ");
                printf("\n");
                printf("BROJ INDEKSA \t IME \t PREZIME \t PROSEK ");
                printf("\n");
                prviPut = false;
            }
            brojStudenata++;
            printf("%s \t %s \t %s \t %f \n", studenti[i].index, studenti[i].ime, studenti[i].prezime,  studenti[i].prosek);
            sumaOcena += studenti[i].prosek;
        }
        i++;
    }
    float prosecnaOcena = sumaOcena / brojStudenata;
    printf("broj studenata na studijskom programu:  %d ", brojStudenata);
    printf("\n");
    printf("Prosečna ocena studenata : %f ", prosecnaOcena);
    return 0;
}