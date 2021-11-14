#include<stdio.h>

int main(){
    int a,b,pomocna
    scanf("%d %d",&a &b);
    printf("Uneti prvi broj a=\n%d:",a);
    printf("Uneti vrednost b=\n%d",b);
    printf("\nPre zamene\t a=\n%d\nb=\n%d",a,b);
    pomocna=a;
    a=b;
    pomocna=b;
    printf("Ispisati vrednosti a i b nakon zamene a=\n%d \nb=\n%d",a,b);
    return 0;


    
    return 0;

}
