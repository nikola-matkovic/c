/*10.23. Саставити програм за израчунавање статистике полагања испита која обухвата следеће
функције: израчунавање укупне просечне оцене (сви који су полгали испит), израчунавање просечне
оцене оних који су положили (оцена већа од 5), израчунавање броја који су положили испит,
израчунавање броја који нису положили испит и израчунавање броја који имају оцену већу од
просечне. У главном програму се уноси број студената и оцене студената у облику низа. Исписати
добијене резултате */

#include<stdio.h>
#define MAX 100

int prosek_svih_studenata(int prosek1[],int n){
    int i,s=0,t;
    for(i=0;i<n;i++){
        s+=prosek1[i];
        t=s/n;
    }
}
int prosek_koji_su_polozili(int prosek2[],int n){
    int i;
    for(i=0;i<n;i++){
        if(prosek2[i]>5){
            return prosek_svih_studenata(prosek2,n);
        }
    }
}
int izracunavanje_broja_koji_su_polozili(int broj1[],int n){
    int i;
    for(i=0;i<n;i++){
        if(broj1[i]>5){
            return broj1[i];
        }

    }
}
int izracunavanje_broja_koji_nisu_polozili(int broj2[],int n){
    int i;
    for(i=0;i<n;i++){
        if(broj2[i]<5)
        return broj2[i];
    }
}
int izracunavanje_broja_koji_imaju_vecu_od_prosecne(int broj3[],int n){

}

int main(){
    int i,n,niz[MAX];
    printf("Unesite n:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    printf("Prosek svih studenata je=%d",prosek_svih_studenata(niz,n));
    return 0;
}