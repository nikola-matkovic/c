#include <stdio.h>
#include <math.h>
int main()
{
int i, n, m;
long s=0;printf(" n= "); scanf("%d", &n);
printf(" m= "); scanf("%d", &m);
i=n;
while(i<=m)
{
if(i%2==0) s=s+pow(i,2);
else s=s+pow(i,3);
i++;
}
printf("\n s= %ld\n", s);
return 0;
}