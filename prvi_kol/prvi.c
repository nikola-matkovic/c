#include <stdio.h>
void main(){
    float x, y;
    printf ("Unesite x, y");
    scanf ("%f %f", &x, &y);
    if(y>=1 && y<=2./3. * x + 5. / 3. && y<= -2*x+7)
        printf("Tačka se nalazi u trouglu");
    else 
       printf("tačka se ne nalazi u trouglu ");
}