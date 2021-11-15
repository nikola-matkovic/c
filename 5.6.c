/*5.6.
Саставити програм за израчунавање суме s квадрата парних и кубова непарних природних
бројева од n до m (n<m).
*/
#include  <stdio.h>
#include <math.h>
int main(){
    long s=0, n, m, i;
    do{
    printf("Unesite  2 prirodna broja \n");
    scanf("%ld %ld",  &n, &m);
    }
    while(n>m);
    for(i=n; i<=m; i++){
        if(i%2==0){
            s+= pow(i, 2);
        }
        else{
            s+= pow(i, 3);
        }
    }
    printf("%ld", s);
    return 0;
}