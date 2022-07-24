// 4.24. Саставити програм за испис свих студената који имају натпросечну оцену и мање од 5 испита
// пренетих у наредну годину. Подаци који се уносе о студентима су: име, презиме, број индекса,
// просек, број пренетих испита. 

#include<stdio.h>
#include<string.h>



typedef struct student{
    char ime[30];
    char prezime[30];
    char brojIneksa[20];
    float prosek;
    int brojPrenetihIspita;

}STUDENT;

int main(){
    struct student Tarik;
    struct student Nikola;
    struct student Ermin;
    float prosek = 0;
    printf("Unesite ime prvog studenta:");
    scanf("%s",Tarik.ime);
    printf("Unesite prezime prvog studenta:");
    scanf("%s",Tarik.prezime);
    printf("Unesite broj indeksa prvog studenta:");
    scanf("%s",Tarik.brojIneksa);
    printf("Unesite prosek prvog studenta:");
    scanf("%f",&Tarik.prosek);
    printf("Unesite broj prenetih ispita:");
    scanf("%d",&Tarik.brojPrenetihIspita);


    printf("Unesite ime drugog studenta:");
    scanf("%s",Nikola.ime);
    printf("Unesite prezime drugog studenta:");
    scanf("%s",Nikola.prezime);
    printf("Unesite broj indeksa drugog studenta:");
    scanf("%s",Nikola.brojIneksa);
    printf("Unesite prosek drugog studenta:");
    scanf("%f",&Nikola.prosek);
    printf("Unesite broj prenetih ispita:");
    scanf("%d",&Nikola.brojPrenetihIspita);

    printf("Unesite ime treceg studenta:");
    scanf("%s",Ermin.ime);
    printf("Unesite prezime treceg studenta:");
    scanf("%s",Ermin.prezime);
    printf("Unesite broj indeksa treceg studenta:");
    scanf("%s",Ermin.brojIneksa);
    printf("Unesite prosek treceg studenta:");
    scanf("%f",&Ermin.prosek);
    printf("Unesite broj prenetih ispita:");
    scanf("%d",&Ermin.brojPrenetihIspita);

    prosek = (Tarik.prosek + Nikola.prosek + Ermin.prosek) / 3;

    if(Tarik.prosek > prosek && Tarik.brojPrenetihIspita < 5){
        printf("\n%s %s broj indeksa: %s ima prosek %f i preneo je %d ispita",Tarik.ime,Tarik.prezime,Tarik.brojIneksa,Tarik.prosek,Tarik.brojPrenetihIspita);
    }
     if(Nikola.prosek > prosek && Nikola.brojPrenetihIspita < 5){
        printf("\n%s %s broj indeksa: %s ima prosek %f i preneo je %d ispita",Nikola.ime,Nikola.prezime,Nikola.brojIneksa,Nikola.prosek,Nikola.brojPrenetihIspita);
    }
     if(Ermin.prosek > prosek && Ermin.brojPrenetihIspita < 5){
        printf("\n%s %s broj indeksa: %s ima prosek %f i preneo je %d ispita",Ermin.ime,Ermin.prezime,Ermin.brojIneksa,Ermin.prosek,Ermin.brojPrenetihIspita);
    }
    
    
    
    
   
  
   


    return 0;
}