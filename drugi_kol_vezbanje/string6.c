#include <stdio.h>
#include <string.h>
#define MAX 20
int main(){
    char prvi[MAX] = "12345";
    char drugi[MAX]  = "67890";
    char treci[MAX] = "abcde";
    char cetvrti[MAX] = "ABCDEF";
    char peti[MAX] = "GHTJKL";
    strcpy(prvi, drugi);
    printf("Prvi : %s Drugi: %s \n", prvi, drugi); //oba će biti 67890
    strncpy(treci, drugi, 1);                      
    printf("drugi : %s treci: %s \n", drugi, treci); //preskače jedan znak, biće 6bcde
    strcat(cetvrti, prvi);
    printf("cetvrti : %s prvi: %s \n", cetvrti, prvi); //Dopisuj samo na kraju
    strncat(peti, drugi, 3);
    printf("cetvrti : %s prvi: %s \n", peti, drugi); //Dopisuj samo na kraju 3 znaka
    return 0;
}