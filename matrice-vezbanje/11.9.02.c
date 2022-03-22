#include <stdio.h>
#define MAX 100
int main()
{
 int i, j, n;
 float a[MAX][MAX], t;
 printf(" n= ");
 scanf("%d", &n);
 printf(" Matrica:\n");
 for(i=0; i<n; i++)
 for(j=0; j<n; j++)
 scanf("%f",&a[i][j]);
 for(i=0; i<n; i++)
 if(a[i][i]!=0)
 {
 t=a[i][i];
 for(j=0; j<n; j++)
 a[i][j]/=t;
 }
 else
 {
 for(j=0; j<n; j++)
 a[i][j]=0;
 a[i][i]=1;
 }
 printf("\n Nova matrica:\n");
 for(i=0; i<n; i++)
 {
 for(j=0; j<n; j++)
 printf(" %.2f",a[i][j]);
 printf("\n");
 }
 
 return 0; 
}