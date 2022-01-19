/*9.30. Саставити рекурзивну функцију која степеновање целог броја на целобројни изложилац, а
затим тестирати функцију за дати природни број и изложилац и исписати добијени резултат.*/

#include<stdio.h>

int stepenovanje(int k,int a){
  if(k==0){
        return 1;
    }
    else return a*stepenovanje(a,k-1);
           
        
}
int main(){
    int a,k;
    printf("Unesite a i k:");
    scanf("%d %d",&a,&k);
    printf("Stepen od %d^%d=%d",a,k,stepenovanje(a,k));
    return 0;

}