#include <stdio.h>
#include <math.h>

float povrsina_kvadrata( float a){
    return sqrt(a, 2);
}

float povrsina_pravougaonika(float a, float b){
    return  a * b;
}

float povrsina_prizme(float a, float h){
    float p, b, m;
    b = povrsina_kvadrata(a);
    m = 4 * povrsina_pravougaonika(a, h);
    return b + m; 
}

int main(){
    float a, h; 
    printf("Unesite stranicu a i visuinu h: ");
    scanf("%f %f", &a, &h );
    printf ("površina prizme je :" povrsina_prizme(a, b));
    
    return 0;
}