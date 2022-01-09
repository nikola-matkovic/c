/*9.7. Саставити програм за израчунавање и исписивање суме квадрата свих бројева, само парних и
само непарних за унете границе интервала. Користити функције за израчунавање збира квадрата./
*/

#include  <stdio.h>

int zbir_kvadrata(int min, int max){
    int s=0, i;
    for(i=min; i<=max; i++ ){
        s += i*i; 
    }
    return s;
}

int main(){
    int min, max;
    printf("Unsite granicu intervala");
    scanf("%d %d", &min, &max); 
    int s = zbir_kvadrata(min, max);
    printf("%d", s);
    return 0;
}