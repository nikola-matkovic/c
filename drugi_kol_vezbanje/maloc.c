#include <stdio.h>  
#include <stdlib.h>
int main()    
{  
    int* niz = (int*) malloc(sizeof(int));
    int broj = 1;

    int i = 0, j=0;
    while(broj !=0){
        scanf("%d", &broj);
        niz = realloc(niz, (i+1) * sizeof(int));
        *(niz+1) = broj;
        i++;
    }
    for(int j = 0; j < i; j++){
        printf("%d\n", *(niz+j));
    }
    free(niz);
    return 0;
}  