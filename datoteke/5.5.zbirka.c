#include <stdio.h>
#include <stdlib.h>

int main(){
    int broj, pom, cif, ind;
    FILE *a,*b;
    a=fopen("brojeviX.txt","r");
    if(a==NULL){
        printf("\n Greska pri otvaranju datoteke!");
        exit(1);
    }
    b=fopen("brojeviY.txt","w");
    if(b==NULL){
        printf("\n Greska pri otvaranju datoteke!");
        exit(1);
    }
    while(fscanf(a,"%d",&broj) != EOF){
        ind=1;
        pom=broj;
        while(pom!=0){
            cif=pom%10;
            if(cif!=3 && cif!=7)
                ind=0;
            pom/=10;
        }
        if(ind && broj!=0)
            fprintf(b,"%d\n",broj);
    }
    fclose(a);
    fclose(b);
    return 0;
}