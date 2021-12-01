#include <stdio.h>

int sabiranje(int a, int b){
return a+b;
}
int razlika(int a, int b){
return a-b;
}

int main(){
    int a , b;
    printf("unesite dva broja \n");
    scanf("%d %d", &a, &b);
    int z = sabiranje(a,b);
    int r = razlika(a,b);
    printf("razlika dva broja je %d ", r);
    printf("Zbir dva broja je %d", z);
    return 0;
}