// 1.Napisati program za izračunavanje funkcije Inx=(x-1)-(-1) (x-1)
// Prestati sa sumiranjem kada je apsolutna vrednost člana manja od 10.


#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define SIZE 100

int main(){
    int lnx;
    int x,n,i;
    int niz[SIZE];
    printf("Unesite x:");
    scanf("%d",&x);
    printf("Unsite n:");
    scanf("%d",&n);
    while(abs(lnx) < pow(10,-6)){
    i = 2;
    lnx = (x - 1);
    if(i % 2 == 0){
        lnx -= pow((x-2),i) / i;
    }
    if(i % 2 == 1){
        lnx += (x - 1) - pow((x-2),i) / i;
    }
    i++;
    if(i == n - 1){
        lnx += pow((-1),n-1) * pow((x-1),n) / n;
    }
}

printf("Lnx je:%d",lnx);
    
        
        
    
    

    return 0;
}
