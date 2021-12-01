#include <stdio.h>
#include <math.h>

int main(){
    float xa, ya, xb, yb, xc, yc, a, b, c, alfa, beta, gama, pi; 
    //unos koordinata tačaka.
    printf("unesite koordinate tačke A: ");
    scanf("%f %f", &xa, &ya);
    printf("unesite koordinate tačke B: ");
    scanf("%f %f", &xb, &yb);
    printf("unesite koordinate tačke C: ");
    scanf("%f %f", &xc, &yc);
    //računanje dužine stranica:
    a=sqrt(pow(xb-xc, 2) + pow(yb-yc, 2));
    b=sqrt(pow(xa-xc, 2) + pow(ya-yc, 2));
    c=sqrt(pow(xb-xa, 2) + pow(yb-ya, 2));
    //ispis dužine stranica:
    printf("Dužine stranica : \na=%f \t b=%f \t c=%f ", a, b, c);
    //provera da li stranice mogu da formiraju trougao
    if(a+b>c && a+c>b && c+b>a){
        printf("\nstranice mogu formirati trougao.  \n");
        gama = acos( (a*a+b*b-c*c) / (2*a*b) );

        
    }
    return 0;
}