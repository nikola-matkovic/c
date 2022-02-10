/*9.10. Саставити функцију за рачунање факторијела, затим саставити програм који рачуна и
исписује број комбинација Cnk = (n) = n!  za за дато n и k помоћу функције за рачунање
                                (K) --------
                                    k!*(n-k)! */

#include <stdio.h>

int faktorijal(int n){
    int i,s=1;
    for(i=1;i<=n;i++){
        s=s*i;
        }
    return s;
}
int main(){
    float n,k,cnk;
    printf("Unesite n i k:");
    scanf("%f %f",&n,&k);
    cnk=(float)faktorijal(n)/(faktorijal(k)*faktorijal(n-k));
    printf("Cnk=%f \n",cnk);
    return 0;
    }