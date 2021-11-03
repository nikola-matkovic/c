#include <stdio.h>
int main(){
    int opseg, i;
    do{
        printf("Unesite zadati opseg, manji od 100\n ");
        scanf("%d", &opseg);
    }
    while (opseg>100 || opseg<3);
    for(i=3; i<=opseg; i++){
        if(i%4==0){
            printf("%d ", i);
        }
    }
}