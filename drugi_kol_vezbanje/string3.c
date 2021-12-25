#include  <stdio.h>
#include <string.h>
#define MAX 30

int main(){
	char puno_ime[MAX], ch;
    int i=0, j=0;
    printf("Unesite puno ime i prezime: ");
    for(i=0; i<MAX; i++){
        ch = getchar();
        if(ch=='\n'){
            puno_ime[i] = '\0';
            break;
        }
        puno_ime[i] = ch;
    }
    for(j=0; j<i; j++){
        putchar(puno_ime[j]);
    }
    printf("\n");
    puts(puno_ime);
    printf("%s",  puno_ime);

	return 0;
}