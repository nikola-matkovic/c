/*1.Napisati funkciju kojom se iz dtoh niza celih brojeva 
X izbacuje maksimalni element.Nje dozvoljeno koriscenje pomocnog niza.*/

#include<stdio.h>
#include<stdlib.h>
void izbaci (int A[],int n)
{
    int i,max,imax,pom;
    max = A[0];
    imax = 0;
    for(i=1;i<n;i++)
    if(A[i] > max){
        max = A[i];
        imax = 1;;
        for(i=imax;i<n-1;i++)
        A[i] = A[i+1];
    }
}

int main(){
    int i,n,a[100];
    printf("Unesite n");scanf("%d",&n);
      printf("Unesite elemente niza");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      izbaci(a,n);
      printf("Nakon izbacivanja max niz je ");
      for(i=0;i<n;i++)
      printf("%d",a[i]);
      
      
return 0;


}