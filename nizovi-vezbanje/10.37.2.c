#include <stdio.h>
#define MAX 100
void CitajNiz(int a[],int n)
{
int i;
for(i=0; i<n; i++)
scanf("%d",&a[i]);
}
void PisiNiz(int a[],int n)
{
int i;
for(i=0; i<n; i++)
printf("%d ", a[i]);
}
void Zameni(int a[], int n)
{int i, pom;
for(i=0; i<n-1; i+=2)
{
pom=a[i];
a[i]=a[i+1];
a[i+1]=pom;
}
}
int main()
{
int i, x, n, a[MAX];
printf(" Broj elemenata niza: ");
scanf("%d",&n);
printf(" Elementi niza: ");
CitajNiz(a, n);
Zameni(a, n);
printf("\n Novi niz: ");
PisiNiz(a, n);
return 0;
}