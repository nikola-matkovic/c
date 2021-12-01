#include <stdio.h>

int main(){
    int x, y, ax, ay, bx, by, cx, cy, dx, dy, l;
    l=5;
    ax=-1;
    ay=1;
    bx=ax+l;
    by=ay;
    cx=ax+l;
    cy=ay+l;
    dx=ax;
    dy=ay+l;
    printf("Unsit koordinate x i y \n");
    scanf("%d %d", &x, &y);
    if(x>=ax && x<=bx  && y>=ay  && y<=cy ){
        printf("tačka sa koordinatama %d %d  se nalazi u kvadratu\n", x, y);
    }
    else{
        printf("Tačka se ne nalazi u kvadratu");
    }
    return 0;
}