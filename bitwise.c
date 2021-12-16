#include  <stdio.h>

int main(){
    int x;
    printf("unesite broj za proveru");
    scanf("%d",&x);
    x & (x - 1) || printf("da");
}