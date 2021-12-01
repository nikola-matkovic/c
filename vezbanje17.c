/* Mnozenj dva broja koristeci zank +, * i pow su zabranjene funkcije */

#include<stdio.h>
int main(){
    int a,b,i,j,s=0;
    printf("Uneti broj a i b=");
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++){
        s+=a;
    }
    printf("\nProizvod dva broja je=\n%d",s);
    return 0;


}
    


