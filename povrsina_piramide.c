#include <stdio.h>
#include <math.h>

float pov_heron(float a, float b, float c){
    float s = (a + b + c) / 2;
    float p = sqrt(s * (s - a) * (s - b) * (s - c));
    return p; 
}

float pov_js_trougla(float a){
    float p = pow(a, 2) * sqrt(3.0) / 4; 
}

float pitagora(float a, float b){
    return sqrt(pow(a, 2) + pow(b, 2));
}

void main(){
    float a, h, s, r0, ru, H, M, B, p;
    int semafor = 0;
    printf("Unesite a :");
    scanf("%f", &a);
    B = pov_js_trougla(a);
    r0 = a * sqrt (3) / 3;
    ru =  a * sqrt (3) / 6;
    printf("da li znate koliko je H? 1 = da, 0 = ne \n");
    scanf("%d", &semafor);
    if(semafor){
        printf("Unesite H: ");
        scanf("%f", &H);
        s = pitagora(r0, H);
        M = 3 *  pov_heron(s, s, a);
        h = pitagora(ru, H);
    }
    else{
        printf("da li znate koliko je h? \n");
        scanf("%d", &semafor);
        if(semafor){
            printf("Unesite h: ");
            scanf("%f", &h); 
            H = sqrt(pow(h, 2) - pow(ru, 2));
            s = pitagora(r0, H);
            M = 3 *  pov_heron(s, s, a);
        }
        else{
            printf("da li znate koliko je s?  \n");
            scanf("%d", &semafor);
            if(semafor){
                printf("Unesite s: ");
                scanf("%f", &s);
                H = sqrt(pow(s, 2) - pow(r0, 2));
                M = 3 *  pov_heron(s, s, a);
                h = pitagora(ru, H);
            }
            else{
                printf("nije moguće izraćunati površinu jer ne znate dovoljno podataka. \n");
            }
        }
    }
    if(semafor){
        p = B + M;
        printf("a = %.4f, H = %.4f, h = %.4f, r0 = %.4f, ru = %2.f, s = %.4f, \n", a, H, h, r0, ru, s);
        printf("B = %.4f, M = %.4f, P = %.4f \n", B, M ,p );
    }
}