// 3. Neka se u datoteci teniseri.txt nalaze podaci o teniserima po sledecem formatu: Sifra igrača
// (ceo broj), ime (najviše 30 znakova), prezime (najviše 30 znakova) i broj poena na ATP rang listi 
// (ceo broj) U datoteci wimbledon.txt se nalaze podaci o plasmanu tenisera na ovom teniskom turniru.
// U svakom redu datoteke se nalazi šifra tenisera (ceo broj), broj poena koji brani na turniru (ceo broj)
// broj poena koji je osvojio na turniru (ceo broj). Raspored tenisera u datotekama ne mora biti identičan,
// niti svi teniseri iz prve datoteke moraju postojati u drugoj datoteci. Napisati program na programskom jeziku
// C koji pročita sadržaj ulaznih tekst i smešta ih u niz struktura, a zatim u izlaznu datoteku atplista.txt za
// svakog tenisera upiše novi broj poena po formatu kao u prvoj ulaznoj datoteci. Novi broj poena se dobija tako
// što se od starog broja poena na ATP listi oduzme broj poena koje teniser brani, a zatim doda broj poena koje je
// teniser osvojio na turniru

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

typedef struct teniser{
    char ime[30];
    char prezime[30];
    int sifraIgraca;
    int brojPoenaNaATPListi;
    int brojPoenaKojeBrani;
    int brojOsvojenihPoena;
    int ukupanBrojPoena;
}TENISER;

int main(){
    FILE *teniseri,*wimbeldon,*atplista;
    int i = 0;
    char c[300];
   
    teniseri = fopen("teniseri.txt", "r");
    if(teniseri == NULL){
        printf("Greska1");
        exit(1);
    }
    struct teniser Teniseri[SIZE];
    while(!feof(teniseri)){
        fgets(c,300,teniseri);
        fputs(c,atplista);
        fscanf(teniseri,"%s %s %d %d",Teniseri[i].ime,Teniseri[i].prezime,&Teniseri[i].sifraIgraca,&Teniseri[i].brojPoenaNaATPListi);
        i++;
    }
    for(int j = 0;j < i;j++){
        printf("%s %s %d %d\n",Teniseri[j].ime,Teniseri[j].prezime,Teniseri[j].sifraIgraca,Teniseri[j].brojPoenaNaATPListi);
    }
    wimbeldon = fopen("wimbeldon.txt","r");
    if(wimbeldon == NULL){
        printf("Greska2");
        exit(1);
    }
    i = 0;
    while(!feof(wimbeldon)){
        fgets(c,300,wimbeldon);
        fputs(c,atplista);
        fscanf(wimbeldon,"%d %d %d",&Teniseri[i].sifraIgraca,&Teniseri[i].brojPoenaKojeBrani,&Teniseri[i].brojOsvojenihPoena);
        i++;
    }
    for(int j = 0;j < i;j++){
        printf("%d %d %d\n",Teniseri[j].sifraIgraca,Teniseri[j].brojPoenaKojeBrani,Teniseri[j].brojOsvojenihPoena);
    }
    atplista = fopen("atplista.txt","w");
    if(atplista == NULL){
        printf("Greska3");
        exit(1);
    }
    fprintf(atplista,"IME PREZIME SIFRA UKUPAN_BROJ_POENA\n");
    i = 0;
    // while(!feof(teniseri)){
    //     Teniseri[i].ukupanBrojPoena = Teniseri[i].brojPoenaNaATPListi - Teniseri[i].brojPoenaKojeBrani + Teniseri[i].brojOsvojenihPoena;
    //     fprintf(atplista,"%s %s %d %d",Teniseri[i].ime,Teniseri[i].prezime,Teniseri[i].sifraIgraca,Teniseri[i].ukupanBrojPoena);
    //     i++;
    // }
    while (!feof(wimbeldon)) {
       
        Teniseri[i].ukupanBrojPoena = Teniseri[i].brojPoenaNaATPListi - Teniseri[i].brojPoenaKojeBrani + Teniseri[i].brojOsvojenihPoena;
        fprintf(atplista," %d %d",Teniseri[i].sifraIgraca,Teniseri[i].ukupanBrojPoena);
        i++;
    }
    fclose(teniseri);
    fclose(wimbeldon);
    fclose(atplista);

    return 0;
}