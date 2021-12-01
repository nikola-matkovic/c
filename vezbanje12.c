/*3.9. Саставити програм који ће учитати два броја и од већег одузети мањи и приказати резултат*/

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Unesite dva broja:");
    scanf("%d %d",&a,&b);
    if(a>b){
        c=a-b;
    }
    else if(a<b){
        c=b-a;
    }
    printf("Rezultat oduzimanja veceg broja od manjeg je=%d\n",c);
    return 0;
}