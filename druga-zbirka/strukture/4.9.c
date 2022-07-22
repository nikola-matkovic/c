// 4.9. Комплексни број је представљен структуром која садржи реални и имагинарни део броја.
// Саставити функције за израчунавање збира, разлике, производа и количника два комплексна броја.
// Затим саставити програм којим се тестирају претходне функције. 

#include<stdio.h>
#include<math.h>

typedef struct broj{
    float realni;
    float imaginarni;
}BROJ;

struct broj zbir(struct broj x, struct broj y){
    x.realni += y.realni;
    x.imaginarni += y.imaginarni;
    return x;
}
struct broj razlika(struct broj x, struct broj y){
    x.realni -= y.realni;
    x.imaginarni -= y.imaginarni;
    return x;
}
float proizvod(struct broj x, struct broj y){
    float z;
    z = x.realni * y.realni - x.imaginarni * y.imaginarni;
    z = x.imaginarni * y.realni + x.realni * y.imaginarni;
    return z;
}
float kolicnik(struct broj x, struct broj y){
  float d;
  float z;
  d = pow(y.realni,2) + pow(y.imaginarni,2);
  z = (x.realni * y.realni + x.imaginarni * y.imaginarni) / d;
  z = (x.imaginarni * y.realni + x.imaginarni * y.realni) / d;
  return z;

}
// d = pow(b.re, 2) + pow(b.im, 2);
//  c.re = (a.re*b.re + a.im*b.im)/d;
//  c.im = (a.im*b.re - a.re*b.im)/d; 

int main(){
    struct broj x,y,z;
    printf("Unesite realni broj za x broj:");
    scanf("%f",&x.realni);
    printf("Unesite imaginarni broj za x");
    scanf("%f",&x.imaginarni);
    printf("Unesite realni broj za y broj:");
    scanf("%f",&y.realni);
    printf("Unesite imaginarni broj za y");
    scanf("%f",&y.imaginarni);
    z = zbir(x,y);
    printf("x + y = %f,%fi",z.imaginarni,z.realni);
 
   
 



    return 0;
}