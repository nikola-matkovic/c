// 4.6. Саставити структуру за чување података о тачкама у равни, функцију за штампање тачке и
// функцију за израчунавање растојања између две тачке. Функције тестирати у главном програму. 

typedef struct tacka{
    int x;
    int y;
}TCAKA;

#include<stdio.h>
#include<math.h>

int main(){
    struct tacka A;
    struct tacka B;
    int d;
    printf("unesite x:");
    scanf("%d",&A.x);
    printf("unesite y:");
    scanf("%d",&A.y);
    printf("Tacka A ima koordinate (%d,%d)",A.x,A.y);
     printf("\nunesite x:");
    scanf("%d",&B.x);
    printf("unesite y:");
    scanf("%d",&B.y);
    printf("Tacka B ima koordinate (%d,%d)",B.x,B.y);
    d = sqrt(pow((B.x -A.x),2) + pow((B.y -A.y),2));
    printf("\nRastojanje izmedju dve tacke je:%d",d);



    return 0;
}