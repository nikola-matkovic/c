/*10.10. Саставити програм који прочита два низа, дужине n, са реалним компонентама, 
A=(A1,A2,..An) i B=(B1,B2,..Bn) izracunava njihov skalarni proizvod s=∑(i=0,n-1)Ai Bi
ispisuje dobijeni rezultat. */

#include<stdio.h>
#define MAX 100

int main(){
    int n,i,niz1[MAX],niz2[MAX],skalarni_proizvod=0;
    printf("Unsite n:");
    scanf("%d ",&n);
    for(i=0;i<n-1;i++){
        scanf("%d",&niz1[i]);
        
    }
    for(i=0;i<n-1;i++){
        scanf("%d",&niz2[i]);
       }
    skalarni_proizvod+=niz1[i]*niz2[i];
    printf("Skalarni proitvod je=%d",skalarni_proizvod);
    return 0;

    
}
