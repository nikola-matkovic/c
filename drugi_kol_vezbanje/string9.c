#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
    int n=0;
    char s[MAX+1];
    printf("\n Unesite string: ");
    //gets(s); 14
    fgets(s, MAX, stdin);
    while(s[n]!='\0')
        n++;
    printf("\n Duzina stringa: %d", n);
}