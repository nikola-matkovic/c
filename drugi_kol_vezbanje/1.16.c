//1.16. Саставити функцију за учитавање једне речи, а затим је тестирати у главном програму. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define  MAX 100

void unos(char s[]){
    char ch; 
    int i;
    while(1){
        ch = getchar();
        if(isspace(ch)){
            s[i]='\0';
            break;
        }
        s[i] =ch;
        i++;
    }
}

void ispis(char s[]){
    int i;
    for(i=0; s[i]; i++){
        putchar(s[i]);
    }
}
int main(){
    char s[MAX];
    unos(s);
    ispis(s);
    return 0;
}