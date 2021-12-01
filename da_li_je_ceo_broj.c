#include <stdio.h>

int main(){
    float x;
    scanf("%f",&x);
    if((x- (int)x)>0){
        printf("Decimalan");
    }
    else{
        printf("ceo");
    }
    return 0;
}