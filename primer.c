#include <stdio.h>
#include <math.h>

int faktorijel(int n){
    if(n==0)
        return 1;
    return n*faktorijel(n-1);
}
int main(){
    int i, a, b, fc, suma, br, zcifra;
    do{
    printf("unesite a i b");
    scanf("%d %d", &a, &b);
    }
    while(a>=b || a<=0 || a<=0);
    for(i=a; i<=b; i++){
        s=0;
        br=i;
        while( br >0){
            zcifra=br%d;
            s+=faktorijel(zcifra);
            br=br/10;
        }
        if(i==s)
            printf("broj koji je jednak sumi fakotirjala svijih cifara je %d ", i);
    }
    return 0;
}