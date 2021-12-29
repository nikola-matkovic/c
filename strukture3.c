#include <stdio.h>
#define MAX 100
typedef struct ucenci
{
 char ime[15];
 char prezime[15];
 char adresa[15];
 int razred;
 int odeljenje;
} UCENICI;
main()
{
 UCENICI ucenik[MAX];
 int i, n, x;
 FILE *dato;
 if((dato=fopen("ucenik.txt","w"))==NULL)
 {
 printf("\n Greska pri otvaranju datoteke!");
 exit(1);
 }
 printf("\n Broj ucenika: ");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
 printf("\n -UCENIK %d-\n",i+1);
 printf(" Ime: ");
 scanf("%s", &ucenik[i].ime);
 printf(" Prezime: ");
 while(getchar()!='\n');
 scanf("%s", &ucenik[i].prezime);
 printf(" Adresa: ");
 scanf("%s", &ucenik[i].adresa);
 printf(" Razred: ");
 scanf("%d",&ucenik[i].razred);
 printf(" Odeljenje: ");
 scanf("%d",&ucenik[i].odeljenje);
 fprintf(dato,"%-15s%-15s%-15s%2d%2d\n",ucenik[i].ime,
 ucenik[i].prezime, ucenik[i].adresa,
 ucenik[i].razred, ucenik[i].odeljenje);
 }
 fclose(dato);
 printf("\n\n Datoteka je kreirana.\n");
 printf("\n Rezred za pretragu: ");
 scanf("%d",&x);
 if((dato=fopen("ucenik.txt","r"))==NULL)
 {
 printf("\n Greska pri otvaranju datoteke!");
 exit(1);
 }
 printf("\n -Ucenici %d-og razreda-\n", x);
 for(i=0; i<n; i++)
 {
 fscanf(dato, "%s%s%s%d%d",&ucenik[i].ime, &ucenik[i].prezime,
 &ucenik[i].adresa,&ucenik[i].razred,&ucenik[i].odeljenje);
 if(ucenik[i].razred==x)
 printf(" %-10s%-10s%-15s%2d%2d\n",ucenik[i].ime, ucenik[i].prezime,
 ucenik[i].adresa, ucenik[i].razred, ucenik[i].odeljenje);
 }
 fclose(dato);
 getche();
 return 0;
}