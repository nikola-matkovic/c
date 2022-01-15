/*9.9. Саставити програм који коришћењем функција одређује највећи заједнички делилац и
најмањи заједнички садржалац два природна броја. Програм треба да захтева унос све док не
прочита нулу за један од два унета природна броја. */

#include<stdio.h>

int nzd(int a,int b){
   int r=a%b;
   if(r==0){
       return b;
   }
   else {
       return nzd(b,r);
       }
}
int nzs(int a,int b){
    int x,y,max;
    x=nzd(a,b);
    if(x>a){
        y=(x/a)*b;
        }
        else {
            y=(a*b)/x;
        }
        return y;
}
int main(){
    int a,b;
    printf("Unesite a i b");
    scanf("%d %d",&a,&b);
    printf("Najmanji zajednicki sadrzalac je=%d \n",nzs(a,b));
    printf("Najveci zajednicki sadrzalac je=%d",nzd(a,b));
   return 0;
}