/*4.2. Саставити програм који употребом FOR петље исписује:
а) све бројеве прве десетице,
б) само непарне бројеве прве десетице
в) све бројеве прве десетице у обрнутом редоследу. 

a)

#include<stdio.h>
int main(){
    int i,n;
    for(i=1;i<10;i+=1)
    {
        printf("\nispisati brojeve desetice=%d\n",i); // ispis za brojeve prve desetice
    }
    return 0;

   }
   b)
   */
#include<stdio.h>
int main(){
    int i,n;
    for(i=1;i<10;i+=2){
        printf("%d",i);

    }
    return 0;
  }


