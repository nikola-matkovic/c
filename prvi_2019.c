/* Ispisati koliko je brojeva intervala(a,b) deljivo sa svojim ciframa (ne uzimajuci u obzir svoju cifru)
prilikom unosa voditi racuna da je a<b*/

#include<stdio.h>
int main(){
    int a, b, t;
    int i, j, k, s; 
    do{
    printf("unesite a i b : \n");
    scanf("%d %d", &a, &b);
    }
    while(a>b);
    for(i=a; i<=b; i++){
        long t=i;
        s=1;
        while(t!=0){
            j=t%10;
            t/=10;
            if(i%j!=0){
                s=0;
                break;
            }
        }
        if(s==1){
            k++;
        }
    }
    printf("%d brojeva u intervalu od %l do %l su deljivi svim svojim ciframa", k);
    return 0;
}
