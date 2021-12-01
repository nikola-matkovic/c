#include <stdio.h>

void zamena_mesta(int* a, int* b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}

int main(){
    int n, i, j;
    printf("Unesite koliko želit elemata niz \n");
    scanf("%d", &n);
    int niz[n];
    for(i=0; i<n; i++)
        scanf("%d", &niz[i]);
    for(j=0; j<n-1; j++)
        for(i=0; i<n-1-j; i++)
            if(niz[i]>niz[i+1])
                zamena_mesta(&niz[i], &niz[i+1]);
    
    for(i=0;i<n;i++)
    {
        printf("%d ", niz[i]); 
    }
    return 0;
}