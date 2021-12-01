/* Napraviti prgram koji sipisuje sve magicne brojeve do n,
savrsen broj je broj koji se dobija zbirom svojih delitelja,
primer takvog br:6 je primervtakvog br jer je 6=3+2+1,28=14+7+4+2+1.*/


#include<stdio.h>
int main(){
 int i,n,j,s=0;
    printf("Uneti broj:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        s=0;
        for(j=1;j<i;j++){
            if(i%j==0){                       
                s=s+j;
            }
        }
        if(s==i){
            printf("Svi magicni brojevi do %d su=%d\n",n,i);
        }
    
    }

   
    return 0;
}