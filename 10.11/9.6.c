#include <stdio.h>
#include <math.h>
float stranica(float x1, float x2, float y1, float y2){
    return sqrt(pow(x1-x2. 2)- pow(y1-y2, 2));
}
float poluobim(float a, float b, float c){
    return (a+b+c)/c;
}
float povrsina(float a, float b, float c){
    float s=poluobim(a, b,c );
    return sqrt(s*(s-a)*s(s-b)*(s-c)     );
}

int main(){
    float xa, xb, xc, ya, yb, yc, a, b , c ;
    printf("unesite koordinate tačaka ");
    scanf("%f %f %f %f %f %f",
    &xa, &ya, &xb, &yb, &xc, &yc);
    a= stranica(xb, xc, yb, yc);
    b= stranica(xa, xc, ya, yc);
    c= stranica(xa, xb, ya, yb);
    if(a+b>c && a+c>b && b+c>a){
        printf("pomocu unetih poordinata tacaka stranice formiraju trougao \n");
        printf("povrsina trogula iznosi %.2f \n", povrsina(a, b, c));
    }
    else{
        printf("Pomocu navedenih koordinata tačaka stranice ne mogu formirati trougao.");
    }
    return 0;
}