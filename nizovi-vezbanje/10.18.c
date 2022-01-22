/*10.18. Саставити програм који за унети низ реланих бројева А дужине n формира и исписује нови
низ В кога чине елементи низа А који су већи од аритемтичке средине свих елемената низа А. */

#include<stdio.h>
#define MAX 100

int main(){
    float nizA[MAX],nizB[MAX],s=0,t;
    int i,j=0,n;
    printf("Unesite n:");
    scanf("%d", &n);
    printf("Niz A je=");
    for (i=0;i<n;i++){
        scanf("%f",&nizA[i]);
        s+=nizA[i];
        t=s/n;
    }
    printf("Arimrticka sredina je=%2.f \n",t);
    printf("Niz B je=");
    for(i=0;i<n;i++){
        if(nizA[i]>t){
            nizB[j]=nizA[i];
            printf("%2.f",nizB[j]);
            j++;
        }
        
    }
   


    return 0;

   }