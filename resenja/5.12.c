/*5.12. Саставити програм који ће учитати два броја m и n. Оба броја треба да буду природна. Ако
тај услов није испињен, учитавање треба поновити. Ако је n<m, заменити m са n. Наћи и исписати
суму квадратних корена свих непарних бројева од m до n.
*/
#include <stdio.h>
#include <math.h>
int main(){
    int m, n, i;
    float s;
    do{
        printf("Unesite 2 prirodna broja: \n");
        scanf("%d %d", &m, &n );
    }
    while(m<=0 || n<=0);
    if(n<m){
        printf("M=%d N=%d ", m, n );
        m = m ^ n;
        n = m ^ n;
        m = m ^ n;
    }
    for(i=m; i<=n; i++){
        if(i%2==1){
            s+=sqrt(i);
        }
    }

    printf("%lf",s );
    return 0;
}