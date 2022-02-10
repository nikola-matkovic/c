#include <stdio.h>

int main(){
    int x = 5, y = 3, z = 20, max;
    //prvi :
    if(x>=y && x>=z){
        max = x;
    }
    else if(y>x && y>=z){
        max = y;
    }
    else{
        max = z;
    }
    //drugi:
    max = x;
    if(y>max){
        max = y;
    }
    if(z>max){
        max = z;
    }
    printf("najveći je %d", max);
    return 0;
}