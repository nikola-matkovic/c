/*9.27. Саставити програм који ће исцртати оквир приказан на слици за унету дужину и ширину. За
цртање вертикалних и хоризонталних делова оквира формирати одговарајуће функције. На слици је
приказан оквир дужине 6 и ширине 2. */

#include<stdio.h>

void ispis(int x,int y){
    int i,j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(i==0 && j==0 || i==0 && j==y-1 || i==x-1 && j==0 || i==x-1 && j==y-1){
                printf("+");
            }
            else if(i==0 || i==x-1){
                printf("-");
            }
            else if(j==0 || j==y-1){
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
    int i,j,x,y;
    printf("Unesite x i y:");
    scanf("%d %d",&x,&y);
    ispis(x+2,y+2);
    return 0;
}