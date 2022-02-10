/*10.21. Саставити функцију за израчунавање скаларног производа два низа реалних бројева
 а затим саставити главни програм који ће учитати два низа једнаких дужина n и
применом формирани функције исписати скаларни производ два низа. */

#include<stdio.h>
#define MAX 100

int skalarni_prozvod(int nizA[],int nizB[],int n){
    int i,s;
    for(i=0;i<n;i++){
        s+=nizA[i]*nizB[i];
    }
    return s;
}

int main(){
    int nizA[MAX],nizB[MAX],i,n;
    printf("Unesite n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&nizA[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&nizB[i]);
    }
    printf("Salarni proizvod od niaz A i B je=%d",skalarni_prozvod(nizA,nizB,n));
    return 0;

    

}