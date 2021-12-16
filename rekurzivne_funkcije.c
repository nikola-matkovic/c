#include  <stdio.h>
#include <math.h>
int fakt(int a){
    if(a==0)
        return 1;
    return a * fakt(a-1);
}
int main(){
    printf("%d", fakt(5));
}