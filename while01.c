//naparviti  program koji ispisuje n elemenata fibonačijevog niza

#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("unesite n");
    int trenunto, temp1, temp2, n, i;
    scanf("%d", &n);
    temp1 =1;
    temp2 =1;
    printf("Elementi fibonacijevog niza su \n 1 1");
    i=3;
    while (i<=n)
    {
        trenunto = temp1 + temp2;
        printf("%d ", trenunto);
        temp2=temp1;
        temp1=trenunto;
        i++;
    }
    return 0;
}