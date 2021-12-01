#include <stdio.h>
#include <string.h>
#define max 20
int main()
{   char rec[max];
    printf("Unesi reč za proveru: ");
    fgets(rec, max, stdin);
    printf("Reč koju ste  uneli je: %s", rec);
    printf("reč ima %ld znakova",  strlen(rec));
    return 0;
}