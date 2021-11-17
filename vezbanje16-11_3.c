/*5.4. Sastaviti program za ispisivanje sume svakog treceg prirodnog broja od 1 do n. Broj n se 
unosi sa tastature.*/
#include <stdio.h>
int main()
{
    int m=0,n,i;
    do{
        printf("Unesite prirodni broj: ");
        scanf("%d",&n);
    }
    while(n<0);

    for(i=1;i<=n;i=i+3){
        m+=i;
    }
    printf("%d",m);

    return 0;
}