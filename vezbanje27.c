/*Саставити програм који за унето n учитава n реалних бројева и приказује њихов збир и
аритметичку средину. */

#include<stdio.h>
int main(){
    int i,n;
    float s=0,broj,as;
    printf("Unesite broj n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Unesize broj:");
        scanf("%f",&broj);
        s+=broj;
    }
    printf("suma je=%f",s);
    as=s/n;
    printf("AS je =%f",as);
    return 0;


}