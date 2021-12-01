#include <stdio.h>
#include <stdlib.h>
int main()
{
    // x ide od -1 do 0; y ide od 1 do 2
    //x >= -1
    float x, y;
    printf("Unesite koordinate tacke A: \n");
    scanf("%f %f", &x, &y);
    
    if(x >= -1 && x <= 4  && y >= 1 && y <= 6)
        {
            printf("Tacka pripada kvadaratu. \n");
        }
    }
    else
    {
        printf("Tacka ne pripada kvadratu. \n");
    }
    return 0;
}