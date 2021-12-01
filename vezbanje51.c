/*Napraviti program koji ispisuje sve brojeve prve desetice*/

#include<stdio.h>
int main(){
    int a=1;
    printf("svi brojevi su : ");
    while(a<10){
        if(a%2==0){
            printf("%d,",a);
        }
        a++;
    }
    
    
  return 0;

}