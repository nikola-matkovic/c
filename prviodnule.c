#include <stdio.h>
int main(){
    int i, n;
    do{
        printf("Unesit broj manji od 100: \n");
        scanf("%d", &n);
    }
    while(n>100 || n<3);
    for(i=4; i<=n; i++){
        if(i%4==0){
            printf("%d ", i);
        }
    }
    return 0;
}