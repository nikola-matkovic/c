/*9.7. Саставити програм за израчунавање и исписивање суме квадрата свих бројева, само парних и
само непарних за унете границе интервала. Користити функције за израчунавање збира квадрата.*/

#include<stdio.h>
#include<math.h>

int zbir_kvadrata(int min,int max){
    int i,s=0;
    for(i=min;i<=max;i++){
        s+=pow(i,2);
        
    }
    return s;
}
int zbir_kvadrata_parnih(int min,int max){
    int i,s=0;
    if(i%2==0){
        for(i=min;i<=max;i++){
            s+=pow(i,2);
        }
    }
    return s;
}
int zbir_kvadrata_neparnih(int min,int max){
    int i,s=0;
    if(i%2==1){
        for(i=min;i<=max;i++){
            s+=pow(i,2);
        }
    }
    return s;
}
int main(){
    int min,max;
    printf("Donja granica:");
    scanf("%d",&min);
    printf("Gornja granica:");
    scanf("%d",&max);
    printf("Suma kvadrata za sve brojeve je= %d \n",zbir_kvadrata(min,max));
    printf("Suma kvadrata neparnih brojeva je=%d \n",zbir_kvadrata_neparnih(min,max));
    printf("Suma kvadrata parnih brojeva je=%d \n",zbir_kvadrata_parnih(min,max));
    return 0;



}