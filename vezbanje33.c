/*Ispisi sve brojeve  od m  do n koju su neparni*/

#include<stdio.h>
int main(){
    int i,m,n;
    printf("Uneti m in :");
    scanf("%d %d",&m,&n);
    for(i=m;i<n;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }
    return 0;
}