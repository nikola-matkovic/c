#include <stdio.h>

int maksimum(int prvi, int drugi){
    if(prvi>drugi)
        return prvi;
    return drugi;
}

int main(){
    int a, b, c ,d ;
    printf("unesite cetiri cela broja");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int pmax= maksimum(a,b);
    int dmax=  maksimum(c,d);
    int maks=  maksimum(pmax, dmax);
    printf("Najveći među brojevima je %d \n", maks);
    return 0;
}