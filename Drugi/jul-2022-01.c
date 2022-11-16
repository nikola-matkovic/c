
#include <stdio.h>
#include<stdlib.h>

int main(){
    int max, sum=0, broj;
    printf("Unesite maksimalnu sumu: \n " );
    scanf("%d", &max);
    do{
        printf("Unesite broj: \n");
        scanf("%d", &broj);
        int zastava   = 1; 

        if (broj == 0 || broj == 1)
        zastava = 0;


        for (int i = 2; i <= broj / 2; ++i) {
            if(broj % i == 0){
                zastava = 0;
                break;
            }
        }
        if(zastava){
            printf(" broj : %d", broj);
            sum += broj; 
        }
    }
    while(max > sum);
    printf("Dobijena suma je: %d", sum);
    return 0;
}