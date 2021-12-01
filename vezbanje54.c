/*5.12. Саставити програм који ће учитати два броја m и n. Оба броја треба да буду природна. Ако
тај услов није испињен, учитавање треба поновити. Ако је n<m, заменити m са n. Наћи и исписати
суму квадратних корена свих непарних бројева од m до n.*/

#include<stdio.h>
#include<math.h>
int main(int argc,char *argv[]){
    int m=0,n=0,i;
    float s=0;
    while(m<1 || n<1){
        printf("Uneti dva broja");
        scanf("%d %d",&m,&n);
    }
    if(n<m){
        m=m+n;
        n=m-n;
        m=m-n;
    }
    for(i=m;i<=n;i++){
        if(i%2==1){
            s+=sqrt(i);
        }
    }
    printf("Suma kora je=%.2f",s);
return 0;
}