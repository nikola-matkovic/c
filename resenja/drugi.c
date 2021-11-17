/*
Elektronski sat pokazuje vreme u satima, minutima, sekundama.
sastaviti program koji ispisuje sve moguće momente u toku jednog
dana takve da je suma cifara na satu jedanaka datom broju n.
ispis treba da bude u obliku n=6:
0sati, 11 minuta, 31 sec
1 sat 32 min 0 sec
*/
#include <stdio.h>
int main(){
    int sat, min, sek, s, n, h1,h2, m1, m2, s1, s2;
    printf("unesite n=");
    scanf("%d", &n);
    for(sat=0; sat<=23; sat++){
        for(min=0; min<=59; min++){
            for(sek=0; sek<=59; sek++){
                h1=sat/10;
                h2=sat%10;
                m1=min/10;
                m2=min%10;
                s1=sek/10;
                s2=sek%10;
                s=h1+h2+m1+m2+s1+s2;
                if(s==n){
                    printf("%d sati, %d minuta,  %d sekundi \n ", sat, min, sek);
                }
            }
        }
    }
    return 0;
}