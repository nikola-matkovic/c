#include  <stdio.h>
#include <math.h>
float izracunavanje_povrsine(){
    
}
void main(){
    float a, b, c, s, p;
    printf("uneste stranice za prvi trougao: \n");
    scanf("%f %f %f", &a, &b, &c);
    s = (a+b+c)/2;
    p = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("površina trougla je jednaka %.2f \n", p);
    printf("uneste stranice za drugi trougao: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a+b+c)/2;
    p = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("površina trougla je jednaka %.2f \n", p);
    printf("uneste stranice za treci trougao:\n ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a+b+c)/2;
    p = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("površina trougla je jednaka %.2f \n", p);
}