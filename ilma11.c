// ispisati najmanji od njih.

#include <stdio.h>

int main(){
    int a, b, c, najmanji;
    printf("unesi 3 broja");
    scanf("%i %i %i", &a, &b, &c);
    if(a<b && a<c){
        najmanji=a;
    }
    if(b<a && b<c){
        najmanji=b;
    }
    if(c<a && c<b){
        najmanji=c;
    }
    printf("%i", najmanji);
    return 0;
}