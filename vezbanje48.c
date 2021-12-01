/*napraviti program koji sabira beskonačno unetih brojeva sve dok ne uneseš nulu . 
Uraditi za domaci dzonica zadao*/ 
#include<stdio.h>
int main(){
    unsigned long long s=0,a=1;
    while(1){
        printf("Uneti broj");
        scanf("%lld",&a);
        if(a==0) break;
        s+=a;
    }
    printf("Zbir brskonacnih brojeva je=%lld",s);

    
    return 0;
}