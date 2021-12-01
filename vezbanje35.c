/*Ispisi sve brojeve  od m  do n koji su deljivi sa 5 ili 3 */

#include<stdio.h>
int main(){
    int i,m,n;
    printf("Uneti m in :");
    scanf("%d %d",&m,&n);
    for(i=m;i<n;i++){
        if(i%15==0){
            printf("%d\n",i);
        }
    }
    return 0;
}