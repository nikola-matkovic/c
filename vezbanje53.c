/*5.10. Саставити програм који ће учитавати један за другим низ бројева. Крај уноса означен је
нулом. Наћи и исписати аритметичку средину учитаних бројева узимајући у обзир само оне бројеве
који су већи или једнаки 2 и мањи или једнаки 6. */

#include<stdio.h>
int main(){
    float a=1.,as,s=0, i;
    while(a!=0){
        printf("Unesi broj");
        scanf("%f",&a);
        if(2<=a && a<=6){
            i++;
            s+=a;
            as=s/i;
        }
    }
    printf("%.2f", as);
    
}
// !=      daaaaa          =!     neeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
