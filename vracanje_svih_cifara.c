#include <stdio.h>
int main(){
    unsigned long long a;
    scanf("%llu", &a);
    long t=a;
    int j;
    //akgirutan ta dobijnje svih cifara broja
    while(t!=0){
        j=t%10;
        t/=10;
        printf("%d", j);
    }
    return 0;
}