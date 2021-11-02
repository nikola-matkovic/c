#include <stdio.h>
int main(){
    int broj;
    printf("unesite decimalan ceo broj: ");
    scanf("%d", &broj);
    int temp=broj;
    int binarno[100];
    int i=0;
    while(temp>0){
        if(temp%2==0)
            binarno[i]=0;
        else
            binarno[i]=1;
        i++;
        temp=temp/2;
    }
    i--;
    printf("\nbroj koji ste uneli u binarnom glasi:");
    for(i; i>=0; i--){
        printf("%d", binarno[i]);
    }
    return 0;
}