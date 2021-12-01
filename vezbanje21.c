#include<stdio.h>
int main(){
    int mesec,dan;
    printf("Unesti broj meseci i dana:");
    scanf("%d %d",&mesec,&dan);
    if(mesec<1 || mesec>12)
    {
        printf("Mesec nije ispravan\n");
    }
        else
            printf("Mesec je ispravan\n");

    if(dan<1 || dan>31)
    {
        printf("Dan je neispravan\n");
    }
        else 
        printf("Dan je ispravan\n");
        return 0;
    
           
}