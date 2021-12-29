#include  <stdio.h>
#include <string.h>

int main(){
	char ime[15];
	char prezime [15];
	printf("Unesite vaš ime: ");
	scanf("%s", ime);
	printf("%s", ime);
	printf("Vaše ime ima %d slova", (int) strlen(ime));
	return 0;
}