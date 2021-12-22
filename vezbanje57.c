/* Kvadrat a,b,c i d se nalazi u koordinanatnom sistem,teme a se nalazi na koordinati (-1 1)
duzina stranice 5.korisnik unosi x,y proveriti da li je tacka sa koordinatama x,y u kvadratu. 
napomena:Uzimati granicnu vrdnost kao da je unutrasnjost kvadrata. */

#include<stdio.h>
int main(int argc,char *argv){
    int x,y,a,b,c,d;
    printf("Uneti tacku x i y");
    scanf("%d %d",&x,&y);
    if(-1<=x && x<=5 && y<=6 && y>=1){
        printf("Unete koordinate x=%d i y=%d se nalaze u kvadratu",x,y);
    }
    else
    printf("Koordinate x i y ne nalaze se u kvadratu");
return 0;

   
}