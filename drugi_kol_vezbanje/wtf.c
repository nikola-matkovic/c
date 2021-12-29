#include <stdio.h>
#include <string.h>
#define MAX 100
main(){
    char s[MAX+1];
    int n, i, k=0, br=0, j;
    printf("\n Unesite recenicu: ");
    gets(s);
    n=strlen(s);
    for(i=0; i<n; i++)
        if (s[i]==' ')
            br++;
    for(i=0; i<br; i++)
        for(j=0; j<n; j++){
            if(s[j]==' '){
                s[j]=s[j+1];
                s[j+1]=' ';
            }
        }
    n=n-br-1;
    for(i=0; i<n; i++)
        if(s[i]!=s[n-i])
            k=1;
        if(k==0)
            printf("\n String je palindrom.");
        else
            printf("\n String nije palindrom.");
    return 0;
} 