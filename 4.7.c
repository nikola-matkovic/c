#include <stdio.h>
int main(){
    int i,n;
    long f=1, s=0;
    printf("n= ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    f*=i;
    s+=f;
    }
    printf("\ns= %ld\n", s);
    return 0;
}