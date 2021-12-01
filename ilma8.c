/*
napisati program u c, koji određuj i prikazuj poruku da li se tačka A sa
kooordinatama x i y nalazi unutar ili van kvadrata K. Date su 
koordinate donjeg levog temena kvadrata K ione iznose x=-1; y=1; 
dužina stranice =5; */

#include <stdio.h>

int main(){
    int x, y;
    printf("unesite x, y: ");
    scanf("%i %i", &x, &y);
    if(x<4  && y<6 && y>1 && x>-1){
        printf("Tačka A koju ste uneli nalazi se unutar kvadrata");
    }
    else{
        printf("Tačka A se ne nalazi u kvadratu.");
    }

    return 0;
}