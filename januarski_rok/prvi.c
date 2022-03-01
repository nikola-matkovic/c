#include <stdio.h>

int main(){
    int n, t, brojcifara, indeks, i, zastava = 0;
    do{
        printf("Unesite broj za proveru: ");
        scanf("%d", &n);
        brojcifara = 1;
        t = n;
        while(t / 10  != 0){
            t = t/ 10;
            brojcifara ++;
        }
        indeks = 1;
        t = n;
        zastava = 0;
        for(i = 0; i < brojcifara; i++){
            if(t % 10 == indeks){
                printf("Cifra %d je na magičnoj poziciji  \n", indeks);
                zastava = 1;
            }
            indeks++;
            t /= 10;
        }
    }while(zastava);
    return 0;
}