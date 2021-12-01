/*3.12. Саставити програм за израчунавање функције z за унето х и y. Функција z је дефинисана на
следећи начин:
z=(min(x,y), y>0)
  (max(x*2,y*2),y<=0)*/

#include<stdio.h>
#include<math.h>
int main(){
    int z,x,y;
    printf("Unesite x i y:\n");
    scanf("%d %d",&x,&y);
    if(y>0){
        if(x<y)
            z=x;
        else
            z=y;                        
    }
    else if(y<=0){
        if(pow(x,2)>pow(y,2))
            z=pow(x, 2);
        else
            z=pow(y,2);   
                               

    }
    printf("%d",z);

    return 0;

}


