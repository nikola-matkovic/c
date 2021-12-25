#include  <stdio.h>
#include <string.h>
#define MAX 30

int main(){
	char puno_ime[MAX];
    printf("Unesite puno ime i prezime: ");
    //scanf(" %s", puno_ime); //radilo bi do razmaka samo 
    //gets(puno_ime); //Nije bezbedna funkcija, treba koristiti fgets
    //printf("%s", puno_ime);
    // sa fgets:
    fgets(puno_ime, MAX, stdin);
    printf("%s", puno_ime);
	return 0;
}