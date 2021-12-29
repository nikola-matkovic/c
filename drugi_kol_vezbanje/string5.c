#include  <stdio.h>
#include <ctype.h>

int main(){
    char  ch;
    while(ch != EOF){
        ch = getchar();
        if(ch != '\n'){
            if(isalnum(ch))
                printf("Karakter %c je slovo ili broj \n", ch);
            if(isalpha(ch))
                printf("Karakter %c je slovo \n", ch);
            if(islower(ch))
                printf("Karakter %c je Malo slovo \n", ch);
            if(isupper(ch))
                printf("Karakter %c je veliko slovo\n", ch);
            if(isdigit(ch))
                printf("Karakter %c je decimalni broj\n", ch);
            if(isxdigit(ch))
                printf("Karakter %c je Heksadecimalna cifra\n", ch);
            if(isspace(ch))
                printf("karakter %c je beli znak\n", ch);
            if(isgraph(ch))
                printf("Karakter %c je štampajući znak ali nije razmak\n", ch);
            if(isprint(ch))
                printf("Karakter %c je štampajući znak\n", ch);
            if(ispunct(ch))
                printf("Karakter %c je specijalni  znak\n", ch);
            if(iscntrl(ch))
                printf("Karakter %c je kontrolni znak\n", ch);
            printf("\n rezultat funkcije  tolwer: %c \n \n rezultat funkcije  toupper: %c \n ", tolower(ch), toupper(ch));
        }
    }
}