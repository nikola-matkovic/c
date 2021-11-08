#include <stdio.h>
int main(){
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        printf("Ponedeljak")
    }
    else if(d==2)
    {
        printf("utorak");
    }
    else if(d==3)
    {
        printf("sreda");
    }
    else if(d==4)
    {
        printf("cetvr");
    }
    else if(d==5)
    {
        printf("petak");
    }
    else if(d==6)
    {
        printf("subota")
    }
    else{
        printf("nedelja")
    }
}