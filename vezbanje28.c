/*.6. Саставити програм који за унети цео број n приказује његов факторијел.*/

#include<stdio.h>
int main(){
    int n,i,s=1;
    printf("Unesite n:");
    scanf("%d",&n);
    for(i=n;i>1;i--){ // 2 nacin for(i=1;i<=n;i++)
        s*=i;
        
        
    }
    printf("FAktorijel od %d je %d",n,s);

    return 0;
}