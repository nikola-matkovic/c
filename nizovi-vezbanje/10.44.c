/*10.44. Саставити програм који исписује број који се највећи број пута појављује у низу целих
бројева, као и број појављивања. Прво сортирати низ у растућем поретку, а затим пронаћи најдужу
секвенцу једнаких елемената. Низ се уноси са тастатуре.*/ 
#include<stdio.h>

int main(){
   int i,n, br, t, p, j;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    printf("Unesite niz:");
    for(i=0;i<n;i++){
       scanf("%d",&niz[i]);
    }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(niz[j]<niz[i]){
            niz[i]=niz[i]^niz[j];
            niz[j]=niz[i]^niz[j];
            niz[i]=niz[i]^niz[j];
         }
      }
   }
   for(i=0;i<n;i++){
      printf("%d",niz[i]);
   }
    
   br = niz[0];
   p = 0;
   for(i=1;  i<n; i++){
      j = i+1;
      t = 1; 
      while(niz[j] == niz[i]){
         t++;
         j++;
      }
      if(t > p){
         p = t;
         br = niz[i];
      }
   }
   printf("\n");
   printf("Najviše puta se ponavlja broj %d, i to %d puta", br, p);
   return 0;

   
}
