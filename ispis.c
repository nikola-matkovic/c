#include <stdio.h>
#include <string.h>
int main()
{  
    int godine ;
    char ime[100];
    char zanimanje[100];
    printf("koliko imate godina?");
    scanf("%d", &godine);
    printf("Kako se zovete?");
    scanf("%s", &ime[0]);
    printf("cime se bavite");
    scanf("%s", &zanimanje[0]); 
    printf("imate %d godina, zovete se %s, bavite se %s ",godine, ime, zanimanje);
    printf("\nprvo slovo tvog imena je %c", ime[0]);
    return 0;
}