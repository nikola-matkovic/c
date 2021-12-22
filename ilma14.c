//proveriti da li je broj nivenov,
//broj je nivenov ako je deljiv sa sumom svojih cifara
#include <stdio.h>
int main(){
    int a, t, s=0, j;
    printf("Unesite broj");
    scanf("%i",&a);
    t=a;
    while(t!=0){
        j=t%10;
        t/=10;
        s=s+j;
    }
    if(a%s==0){
        printf("Broj je nivenov");
    }
    else{
        printf("broj nije nivenov");
    }
    return 0;
}