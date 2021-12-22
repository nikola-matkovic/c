//Napisati program kojim se nalaze delitelji prirodnog broja X<1000.
#include <stdio.h>
int main(){
    int x, i;
    do{
        printf("unesite x");
        scanf("%d", &x);
    }
    while(x>=1000 || x<=0);
    for(i=1; i<=x/2; i++){
        if(x%i==0)
            printf("%d \n", i);
    }
    return 0;
}