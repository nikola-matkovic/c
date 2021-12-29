#include <stdio.h>
#include <string.h>

int main() {
	char s1[] = "aaab", s2[] = "aaac", s3[] = "aaad";
	int result;
	result = strcmp(s2, s1);
	printf("strcmp(s2, s1) = %d\n", result);
	result = strcmp(s2, s3);
	printf("strcmp(s2, s3) = %d\n", result);
	//n
	result = strncmp(s1, s2, 3);
	printf("strncmp(s1, s2, 3) = %d\n", result);
	result = strncmp(s2, s3, 4);
	printf("strncmp(s2, s3, 4) = %d\n", result);
	printf("Dužina S1 je %d \n", (int)strlen(s1));
	char * d = strchr(s3, 'd');
	char * p = s3;
	printf("%ld \n", d - s3 + 1); // d je pokazivač koji pokazuje na 4 element, ako oduzmemo adresu od prvog (s3) i uzmemo sledeću poziciju, to je poticija tog slova.
	char* a = strrchr(s1, 'a');
	printf("%c", *a);
	printf("%c", *a+1);
	return 0;
}