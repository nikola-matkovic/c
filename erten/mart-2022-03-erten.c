#include<stdio.h>

typedef struct stanovi
{
    int BrojStana;
    int Povrsina;
    int Cena;
    int BrojSoba;
    int JeLiSlobodan;
}STANOVI;

int main(int argc, char const *argv[])
{
    FILE *stanovi;
    stanovi = fopen("stanovi.dat","r");
    if(stanovi==NULL){
        printf("Greska pri otvaranju fila");
        exit(1);
    }

    FILE *na_prodaju;
    na_prodaju = fopen("na_prodaju.dat","w");
    if(na_prodaju==NULL){
        printf("Greska pri otvaranju fila");
        exit(1);
    }
    int i = 0;
    while (!feof (stanovi))
    {
        fscanf(stanovi,"%d %d %d %d %d", &stanovi[i].BrojStana, &stanovi[i].Povrsina, &stanovi[i].Cena, &stanovi[i].BrojSoba,  &stanovi[i].JeLiSlobodan );
        printf("%d %d %d %d %d \n", &stanovi[i].BrojStana, &stanovi[i].Povrsina, &stanovi[i].Cena, &stanovi[i].BrojSoba,  &stanovi[i].JeLiSlobodan );
        if (stanovi[i].JeLiSlobodan > 0)
        {
            fprintf(na_prodaju,"%d %d %d %d %d", stanovi[i].BrojStana, stanovi[i].Povrsina, stanovi[i].Cena, stanovi[i].BrojSoba,  stanovi[i].JeLiSlobodan );
        }
        i++;
    }
    int MaksimalnaCena;
    int ZeljeniBrojSoba;
    printf("Unesite maksimalnu cenu stana: \n");
    canf("%d ", &MaksimalnaCena);
    printf("Unesite broj soba: \n");
    scanf("%d", &ZeljeniBrojSoba);
    for (j = 0; j < i; j++)
    {
        if (&stanovi[j].Cena <= MaksimalnaCena && &stanovi[j].BrojSoba == ZeljeniBrojSoba)
        {
            printf("Stanovi koji ispunjavaju kriterijum su:\n");
            printf("%d %d %d %d", &stanovi[i].BrojStana, &stanovi[i].Povrsina, &stanovi[i].Cena, &stanovi[i].BrojSoba);
        }
        else
        {
            printf("Nema takvih stanova.\n");
        }
            
    }    
    return 0;
}
