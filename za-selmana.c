#include <stdio.h>
#include <math.h>

int main(){
    //korisnik unese n, 
    //poređati cifre od najveće do najmanje.
    int n;
    scanf("%d",&n);
    int t = n;
    //"#############od najvećeg do najmanjeg
    // while (t/10 != 0){
    //     printf("%d", t%10);
    //     t/=10;
    // }
    // printf("%d", t);
    //###############od najamnjeg do najvećegć
    //"#############od najvećeg do najmanjeg
    int brojac = 1;
    while (t/10 != 0){
        t/=10;
        brojac++;
    }
    //ispis:
    int i, temp;
    t = n;
    for(i=brojac; i>0; i--){
        temp = (int)pow(10, i-1);
        printf("%d" , t / temp);
        t %= temp;
    }
    while
    return 0;
}