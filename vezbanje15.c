/*3.11. Саставити програм за израчунавање функције у за унето х. Функција у је дефинисана на
следећи начин:
y=(2x, -2<x<=2)
  (3x-1, 5<=x<7)
  (1/x, ostali slucajevi )*/

  #include<stdio.h>
  int main(){
    int x,y;
    printf("Uneti broj x=");
    scanf("%d",&y);
    if(-2<y<=2){
      x=2*y;
      }
    else if(5<=y<7){
      x=3*y-1;
      }
    else
    x=1/y;
    printf("Rezultat funkcije je=\n%d",x);
    return 0;
    }

  

      
