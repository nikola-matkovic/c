// 4.22. Саставити функцију која учитава податке о особи (име и презиме, адреса, старост), а затим у
// главном програму користећи претходну функцију уноси податке о n особа и штампа те податке

#include<stdio.h>

#define SIZE 100

typedef struct osoba{
    char ime[30];
    char prezime[30];
    char adresa[30];
    int starost;
}OSOBA;

void unesiOsobu(struct osoba *osoba){
    printf("Unesite ime:");
    scanf("%s",osoba->ime);
    printf("\nUnesite prezime:");
    scanf("%s",osoba->prezime);
    printf("\nUnesite adresa:");
    scanf("%s",osoba->adresa);
    printf("\nUnesite starost:");
    scanf("%d",&osoba->starost);

}

int main(){
    int i,n;
    struct osoba osoba[SIZE];
    printf("Unesite n ososba");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        unesiOsobu(&osoba[i]);

    }
    for(i = 0; i < n; i++){
        printf("%s %s zivi na adresi %s i ima %d godina\n",osoba[i].ime,osoba[i].prezime,osoba[i].adresa,osoba[i].starost);
    }


    return 0;
}