/*10.23. Саставити програм за израчунавање статистике полагања испита која обухвата следеће
функције: израчунавање укупне просечне оцене (сви који су полгали испит), израчунавање просечне
оцене оних који су положили (оцена већа од 5), израчунавање броја који су положили испит,
израчунавање броја који нису положили испит и израчунавање броја који имају оцену већу од
просечне. У главном програму се уноси број студената и оцене студената у облику низа. Исписати
добијене резултате */

#include<stdio.h>
#define MAX 100

float prosek(int niz[], int n){
    int i,s=0;
    float ar;
    for(i=0;i<n;i++){
        s+=niz[i];
    }
    ar=(float)s/n;
    return ar;
}

float prosek_svih_studenata(int niz[],int n){
    return prosek(niz, n);
}

float prosek_koji_su_polozili(int niz[],int n){
    int polozili[n], i, j;
    j=0;
    for(i=0; i<n; i++){
        if(niz[i]>5){
            polozili[j] = niz[i];
            j++;
        }
    }
    return prosek(polozili, j);
}

int izracunavanje_broja_koji_su_polozili(int niz[],int n){
    int i, brojac=0;
    for(i=0;i<n;i++){
        if(niz[i]>5){
            brojac++;
        }
    }
    return brojac;
}

int izracunavanje_broja_koji_nisu_polozili(int niz[],int n){
    return n - izracunavanje_broja_koji_su_polozili(niz, n);
}

int izracunavanje_broja_koji_imaju_vecu_od_prosecne(int niz[],int n){
    float prosecna = prosek_svih_studenata(niz,  n);
    int i, brojac=0;
    for(i=0; i<n; i++){
        if(niz[i]>prosecna){
            brojac++;
        }
    }
    return brojac;
}

int main(){
    int i,n,niz[MAX];
    printf("Unesite n:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    printf("Prosek svih studenata je=%.2f\n", prosek_svih_studenata(niz,n));
    printf("Prosek studenata koji su položili je=%.2f\n", prosek_koji_su_polozili(niz,n));
    printf("Broj studenata koji su položili je %d\n", izracunavanje_broja_koji_su_polozili(niz,n));
    printf("%d studenata je palo \n", izracunavanje_broja_koji_nisu_polozili(niz,n));
    printf("%d Studenata imaju veću ocenu od prosečne", izracunavanje_broja_koji_imaju_vecu_od_prosecne(niz, n));
    return 0;
}