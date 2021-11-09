#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    float a, b, c, D, x1, x2;
    printf("unesite tri broja \n");
    scanf("%f %f %f",a ,b, c );
    if(a != 0 )
    {
        D = (pow(b, 2)) - (4*a*c);
        if( D > 0 )
        {
            x1 =(-b+sqrt(D))/(2*a); 
            x2 = (-b-sqrt(D))/(2*a);
            printf("Jednacina ima dva realna resennja i to x1 = %.2f i x2 = %.2f.\n", x1, x2);
            system("PAUSE");
            return 1;
        }
        else if( D == 0)
        {
            x1 = -b / 2*a;
            printf("Jednacina ıma samo jedno resenje ı to x1 = x2 = %.2f.\n", x1);
            system("PAUSE");
            return 1;
        }
        else
        {
            printf("Jednacina nema realna resenja. \n");
            system("PAUSE");
            return 1;
        }
    }
    else if(a == 0 && b != 0 )
    {
        float x = -(c/b);
        printf("Jednacina je linearna, x = %.2f\n", x);
        system("PAUSE");
        return 1;
    }
    else
    {
        printf("Jednacina nema resenje\n");
        system("PAUSE");
    }
    return 0;
}