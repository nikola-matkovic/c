/*/4.14. Саставити програм који исписује све троцифрене бројеве код којих је друга цифра за 2 већа
од прве, а трећа за 1 већа од друге.*/
#include <stdio.h>
int main(){
    int i, prva, druga, treca;
    for(i=100; i<1000; i++){
        prva=i%10;
        druga=(i/10)%10;
        treca=i/100;
        (druga==prva+2 && treca==druga+1)&&printf("%d", i);
    }
    return 0;
}