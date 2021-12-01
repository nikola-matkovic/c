/*Napraviti program koji za uneti broj predmeta dopusta da korisnik unese ocenu iz svakog predmeta,nalazi prosek,
najvecu i najmanju ocenu*/

#include<stdio.h>
int main(){
    int i,n;
    float broj,max=0,min=5,as,s=0;
    printf("Unesite broj predmeta:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Unesite ocenu iz %d.predmeta:",i+1);
        scanf("%f",&broj);
        s+=broj; // s=s+broj;
        if(broj>max){
            max=broj;
        }
        if(broj<min){
            min=broj;
        }

    }
    printf("Najmanja ocena koju ima je:%.2f\n",min);
    printf("Najveci broj je=%.2f\n",max);
    as=s/n; /* arihmeticka sredina se racuna kada zbir podelimo sa unosom n;*/
     printf("Prosek ocena je :%.2f\n",as);
   
   
    return 0;
} 