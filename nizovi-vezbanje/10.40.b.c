#include <stdio.h>

void main() {
int i, j, n, pom;
printf(" Broj elemenata niza: ");
scanf("%d", &n);
int niz[n]
printf(" Elementi niza: ");
for(i=0; i<n; i++)
scanf("%d", &niz[i]);
for(i=1; i<n; i++)
{
pom=niz[i];
for(j=i-1; j>=0; j--)
if (niz[j] > pom)
niz[j+1]=niz[j];
else break;niz[j+1]=pom;
}
printf (" Sortirani niz: ");
for(i=0; i<n; i++)
printf ("%d ",niz[i]);
}