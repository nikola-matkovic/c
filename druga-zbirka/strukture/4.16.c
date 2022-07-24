// 4.16. Саставити главни функцију која проверава да ли се задата тачка налази унутар задатог круга.
// Параметри круга су координате центра и полупречник. Затим саставити програм који тестира
// претходну функцију. 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

// Tacka

typedef struct tacka{
    int x;
    int y;
}TACKA;

typedef struct krug{
    struct tacka centar;
    float r;
}KRUG;

float rastojanjeIzmdejuDveTacke(struct tacka *a,struct tacka *b){
    float d;
    d = sqrt(pow((b->x - a->x),2) + pow((b->y - a->y),2));
    return d;
}

bool daLiSeNalaziUKrugu(struct tacka *tacka,struct krug *krug){
    if(rastojanjeIzmdejuDveTacke(tacka,&krug->centar) <= krug->r){
        return true;

    }
    else{
        return false;
    }

}   

int main(){
    struct tacka A;
    struct tacka B;
    struct krug O;
    printf("Unesite x za tacku A:");
    scanf("%d",&A.x);
    printf("Unesite y za tacku A:");
    scanf("%d",&A.y);
    printf("Unesite x za tacku B:");
    scanf("%d",&B.x);
    printf("Unesite y za tacku B:");
    scanf("%d",&B.y);
    printf("Unesite koordinate kruga:");
    printf("\nx:");
    scanf("%d",&O.centar.x);
    printf("\ny:");
    scanf("%d",&O.centar.y);
    printf("Unesite poluprecnik za krug O:");
    scanf("%f",&O.r);
    printf("\nTacka A i B se nalaze na rastojanju: %f",rastojanjeIzmdejuDveTacke(&A,&B));
   if(daLiSeNalaziUKrugu(&A,&O) == true){
    printf("Tacka A se nalazi u krugu");
   }
   else{
    printf("Tacka A se ne nalazi u krugu");
   }
    

    return 0;
}