/*9.2. Саставити функције за рачунање збира, производа и количника два реална броја, као и
функције за израчунавање квадрата и куба реалног броја. Затим саставити програм за израчунавање
израза z1=x+y(pow,2),z2=pow(x,3)-x/y i z3=(x*y)+(5-y)
 користећи претходно формиране функције.
Променљиве х и у се уносе са тастатуре. Исписати резултате. */

#include<stdio.h>
#include<math.h>

float zbir(int a,int b){
    int c=a+b;
    return c;
}
float proizvod(int a,int b){
   int c=a*b;
   return c;
    
}
float razlika(int a,int b){
    int c=a-b;
    return c;
}
float kolicnik(float a,float b){
    if(b==0){
        return 0;
    }
    else return a/b;
    }
    float kvadrat(int a){
        return a*a;
    }
    float kubni(int a){
        return a*a*a;
    }

int main(){
    float x,y,z1,z2,z3;
    printf("Unesite x i y=");
    scanf("%f %f",&x,&y);
    z1=zbir(x,pow(y,2));
    z2=razlika(kubni(x),kolicnik(x,y));
    z3=zbir(proizvod(x,y),razlika(5,y));
    printf("z1=%2.f \n z2=%2.f \n z3=%2.f \n",z1,z2,z3);
    
    return 0;
}