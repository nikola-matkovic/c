/*4.13. Саставити програм који ће исписати све бројева прве стотине који су дељиви са 6 и њихову
суму.*/

#include<stdio.h>
int main(){
    int i,s=0;
    for(i=0;i<100;i++){
        if(i%6==0){
            s+=i;
            printf("%d\n",i);
        }
    }
    printf("Suma brojeva deljivih sa 6 je=\n%d",s);
   
}