/*3.13. Саставити програм који исписује обавештење да ли унете променљиве а, b и c које
означавају дужине страница формирају троугао. Уколико формирају троугао израчунати површину
троугла користeћи следеће формуле: 

s=a+b+c/2, P=koren(S*(S-a)(S-b)(S-c)).*/

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,p;
    printf("Uneti stranice a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c&&a+c>b&&c+b>a){
        printf("Stranice a,b i c formiraju trougao\n");
        s=(a+b+c)/2;
         p=sqrt(s*(s-a)*(s-b)*(s-c));
    }
    else{
        printf("Stranice a,b i c ne formiraju trougao");

    }
    printf("S=%.2f i P=%.2f",s,p);
    return 0;
}