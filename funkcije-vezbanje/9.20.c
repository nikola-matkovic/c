/*9.20. Саставити програм који ће табеларно приказати вредности функција 
f1(x)=sin(x)/x i f2(x)=pow((sin(x)/x),2)=pow(f1(x),2).Promenljiva x treba da uzima od 1 do 
ucitanog xmin, (xmin<1)тако да се свако наредно x смањи за учитану вредност корака dx (dx <0.1).
*/
#include<stdio.h>
#include<math.h>

float f1(float x){
    return sin(x)/x;

}
float f2(float x){
    return pow(f1(x),2);
}
int main(){
    float x,dx,xmin;
    printf("Unesite xmin i dx");
    scanf("%f %f",&xmin,&dx);
    printf("X \t f1(x) \t f2(x) \n");
    for(x=1;x>xmin;x-=dx){
        printf("%5.2f \t %5.2f \t %5.2f \n",x,f1(x),f2(x));

    }
    return 0;
    
}