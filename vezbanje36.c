/*4.12. Саставити програм који ће учитати n реалних бројева и исписати највећи*/

#include<stdio.h>
int main(){
    int i,n;
    float broj,max,as,s=0;
    printf("Unesite n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Unesite broj:");
        scanf("%f",&broj);
        s+=broj; // s=s+broj;
        if(broj>max){
            max=broj;
        }
    }
    printf("Najveci broj je=%f",max);
    as=s/n; /* arihmeticka sredina se racuna kada zbir podelimo sa unosom n;*/
     printf("Arimeticka sredina je:%.2f\n",as);
    printf("Zbir brojeva je:%.2f\n",s);
   
    return 0;
} 