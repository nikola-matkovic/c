// 4.30. Структура Ханојске куле је дата са парамтерима: штап са дисковима, број дискова, назив
// куле. Користећи ову структуру саставити програм који решава проблем тзв. "ханојских кула": дата су
// три вертикална штапа, на једном се налази n дискова полупречника 1, 2, 3,... до n, тако да се највећи
// налази на дну, а најмањи на врху. Остала два штапа су празна. Потребно је преместити дискове на
// други штап тако да буду у истом редоследу, премештајући један по један диск, при чему се ни у
// једном тренутку не сме ставити већи диск преко мањег. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100

typedef struct kula{
    char stapSaDiskovima[30];
    int brojDiskova;
    char nazivKule[30];

}KULA;

void unesiKulu(struct kula *kula,char *nazivKule,int brojDiskova){
    int i;
   strcpy(kula->nazivKule,nazivKule);
   kula->brojDiskova = brojDiskova;
   for(i = 0;i < brojDiskova;i++){
    kula->stapSaDiskovima[i] = brojDiskova - i;
   }
    
}

void ispisiKulu(struct kula *kula){
    int i;
    printf("Naziv kule: %s\n\n",kula->nazivKule);
    printf("Broj dikova: %d\n\n",kula->brojDiskova);
    printf("Diskovi:\n");
    for(i = 0; i < kula->brojDiskova; i++){
        printf("%d",kula->stapSaDiskovima[i]);

    }

}

void premestiDiskove(struct kula *prvi,struct kula *drugi){
    if(prvi->brojDiskova == 0 || (drugi->brojDiskova > 0 && prvi->stapSaDiskovima[prvi->brojDiskova - 1] >= drugi->stapSaDiskovima[drugi->brojDiskova-1])){
        //To be continued
    }
}

int main(){
    system("clear");
    struct kula prvaKula;
    struct kula drugaKula;
    struct kula trecaKula;
    unesiKulu(&prvaKula,(char*)"Kula Motrilja",4);
    ispisiKulu(&prvaKula);
 
    return 0;
}