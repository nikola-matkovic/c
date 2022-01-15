/*9.27. Саставити програм који ће исцртати оквир приказан на слици за унету дужину и ширину. За
цртање вертикалних и хоризонталних делова оквира формирати одговарајуће функције. На слици је
приказан оквир дужине 6 и ширине 2.*/
#include <stdio.h>

void ispisi(int x, int y){
    int i, j;
    for(i = 0; i<y; i++){
        for(j=0; j<x; j++){
            if(i==0 && j==0 || i==0 && j==x-1 || i==y-1 && j==0 || i==y-1 && j==x-1 ){
                printf("+");
            }
            else if(i == 0 || i == y-1){
                printf("-");
            }
            else if(j== 0 || j== x-1){
                printf("|");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    int x, y;
    printf("Unesite X i Y  ");
    scanf("%d %d", &x, &y );
    ispisi(x+2, y+2);
    return 0;
}