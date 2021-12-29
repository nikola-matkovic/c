/*9.10.
Саставити функцију за рачунање факторијела, затим саставити програм који рачуна и
исписује број комбинација C n , k = n!/k!(n-k),за дато n и k помоћу функције за рачунање*/

#include <stdio.h>
int faktorijal(int a){
    int i,s=1;
    for(i=0;i<a;i++){
        s*=i;
        return s;
    }
}
int main(){
    float c,n,k;
    printf("Uneti ,n i k:");
    scanf("%f %f",&n,&k);
    c=faktorijal(n)/faktorijal(k)*(n-k);
    printf("c=%d",c);
    return 0;    
    
}