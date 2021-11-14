/*аставити програм који исписује вредност модула комплексног броја z = a + bi за унете
вредности а и b. Модул се рачуна по формули 2 2
z = a + b .*/


#include<stdio.h>
#include<math.h>

int main(){
    float a,b,m;
    scanf("%f %f %f",&a,&b,&m);
    printf("Unesite broj a=\n%2f",a);
    printf("Unesite broj b=\n%2f",b);
    m=sqrt(a*a+b*b);
    printf("Modul kompleksnog broja je:%2f,%2f,%2f",m,a,b);

    return 0;


}
