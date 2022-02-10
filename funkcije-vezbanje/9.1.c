/*9.1. Саставити функцију која врши сабирање два цела броја, а затим саставити програм који
тестира функцију и исписује резултат. */

#include<stdio.h>

int sabiranje(int a, int b){
    int c=a+b;
   return c;

}



int main(){
    int a,b,c,d,f,g;
    printf("Unesite dva broja");
     scanf("%d %d",&a,&b);
    printf("Unesite druga dva broja\n");
    scanf("%d %d",&f,&g);
    c=sabiranje(a,b);
    d=sabiranje(f,g);
    printf("Zbir dva broja je=%d \n",c);
    printf("Zbir druga dva broja je=%d \n",d);
    
    
    return 0;
}
