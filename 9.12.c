// 9.12. Саставити програм којим се исписују сви троцифрени бројеви (ако их има) који су једнаки
//суми факторијела својих цифара.
#include <stdio.h>
int faktorijal(int n){
     /*    if(n == 0) return 1;
    return n * faktorijal(n-1);    */
    int i, s=1;
    for(i = 1; i<=n; i ++){
        s*= i;
    }
    return s;
}
int main(){
    int n, i, j, k, s;
    for(n = 100; n<1000; n ++ ){
        i = n / 100;
        j = (n % 100) / 10; 
        k = n % 10;
        s = faktorijal(i) + faktorijal(j) + faktorijal(k);
        if(s == n)
            printf("%d \n", s);
    }
}