/*9.5. Саставити програм за израчунавање површине и запремине лопте и исписивање резултата на
основу унете вредности полупречника r. За рачунање запремине и површине, као и за испис
резултата формирати одговарајуће функције.

V=4/3*pi*pow(r,3)
P=4*pi*pow(r,2)

*/

#include<stdio.h>
#include<math.h>
#define PI 3.14159265

float povrsina(int r){
    int P;
    P=4*PI*pow(r,2);
    return P;
}
float zapremina(int r){
    int V;
    V=(4/3)*PI*pow(r,2);

        return V;
    
}



int main(){
    float r,P,V;
    printf("Uneti poluprecnik lopte=");
    scanf("%f",&r);
    P=povrsina(r);
    V=zapremina(r);
    printf("Povrsina lopte je=%.2f \n a zapremina je=%.2f",P,V);

    return 0;

}