#include <stdio.h>
#include <stdlib.h>
int main(){
    float br, as;
    int i=0;
    br=1;
    as=0;
    printf("unosite realne brojeve, ili 0 za kraj unsosa \n");
    float s=0;
    while(br !=0){
        scanf("%f", &br);
        s+=br;
        i++;
    }
    i--;
    as=s/i;
    printf("Dobijena arihtmetička sredina iznosi %.2f \n", as);
    return 0;
}