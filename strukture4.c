#include <stdio.h>
typedef struct temperature
{
 int datum;
 int m7;
 int m13;
 int m19;
} TEMPERATURE;
main()
{
 TEMPERATURE temp[10];
 int i, j, uk7=0, uk13=0, uk19=0, pomd;
 float pr7, pr13, pr19, prdnevna[10], pom;
 FILE *ulaz, *izlaz;
 char ime1[20], ime2[20];
 printf("\n Ime datoteke sa podacima: ");
 scanf("%s",&ime1);
 printf(" Ime datoteke za kreiranje: ");
 scanf("%s",&ime2);
 if((ulaz=fopen(ime1, "r"))== NULL)
 {
 printf("Greska prilikom otvaranja datoteke!\n");
 return 1;
 }
 if((izlaz=fopen(ime2, "w"))== NULL)
 {
 printf("Greska prilikom otvaranja datoteke!\n");
 return 1;
 }
 /*Citanje podataka iz datoteke*/
 /*Racunanje ukupnih temperatura u 7h, 13h i 19h i dnevne prosecne temperature*/
 for(i=0; i<10; i++)
 {
 fscanf(ulaz, "%d%d%d%d", &temp[i].datum, &temp[i].m7,
 &temp[i].m13, &temp[i].m19);
 uk7+=temp[i].m7;
 uk13+=temp[i].m13;
 uk19+=temp[i].m19;
 prdnevna[i]=(float)(temp[i].m7 + temp[i].m13 + temp[i].m19)/3;
 }
 /*Racunjane prosecnih temperatura u 7h, 13h i 19h*/
 pr7=(float)uk7/10;
 pr13=(float)uk13/10;
 pr19=(float)uk19/10;
 /*Sortiranje prosecnih temperatura od najvise ka najnize*/
 for(i=0; i<9; i++)
 for(j=i+1; j<10; j++)
 if(prdnevna[i] < prdnevna[j])
 {
 pom=prdnevna[i];
 pomd=temp[i].datum;
 prdnevna[i]=prdnevna[j];
 temp[i].datum=temp[j].datum;
 prdnevna[j]=pom;
 temp[j].datum=pomd;
 }
 /*Upis podataka u novokreiranu datoteku*/
 for(i=0; i<10; i++)
 fprintf(izlaz, " %02d %.2f\n", temp[i].datum, prdnevna[i]);
 fclose(ulaz);
 fclose(izlaz);
 printf("\n Datoteka je kreirana!\n\n");
 /*Ispis podataka na ekran*/
 printf(" Najtopliji dan %02d.avgust sa temperaturom od %.2f stepeni.\n",
 temp[0].datum, prdnevna[0]);
 printf(" Najhladniji dan %02d.avgust sa temperaturom od %.2f stepeni.\n",
 temp[9].datum, prdnevna[9]);
 printf(" Prosecna temperatura u 07h: %.2f\n", pr7);
 printf(" Prosecna temperatura u 13h: %.2f\n", pr13);
 printf(" Prosecna temperatura u 19h: %.2f\n", pr19);
 getche();
 return 0;
}