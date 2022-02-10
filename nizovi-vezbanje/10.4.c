/*10.4. Саставити програм који ће учитати низ од n елемената и исписати их оним редоследом којим
су учитани.*/

#include<stdio.h>
#define MAX 100
int main(){
    int i,niz[MAX],n;
    printf("Unesite n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
        }
        printf("Uneti niz je=");
        for(i=0;i<n;i++){
            printf("%d ",niz[i]);
        }
        return 0;
}