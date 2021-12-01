/*
Učitati vrednost promenljive X.
Promenljivu X uvećati za apsolutnu vrednost promenljive Y 
*/
#include <stdio.h>

int main(){
    int x, y, avy;
    printf("Unesit x i y: ");
    scanf("%i %i", &x, &y );
    if(y>0){
        avy=y;
    }
    else{
        avy=-y;
    }
    x=x+avy;
    printf("%i", x);
    return 0;
}