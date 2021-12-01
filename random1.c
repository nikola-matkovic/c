// ispis svih neparnih brojeva od 100 do 200:

#include  <stdio.h>

int main(){
    int i;
    for(i=100; i<200; i++){
        if(i%2==1){
            printf("%d \n", i);
        }
    }
    return 0;
}