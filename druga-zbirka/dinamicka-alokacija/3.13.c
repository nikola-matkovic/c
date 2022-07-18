// 3.13. Саставити програм који алоцира низ од max=5 целобројних елемената. Корисник затим
// уноси низ бројева. Ако број унетих бројева премаши max, тада се повећава алоцирана меморија за
// додатних 5 елемената. Унос се прекида када корисник укуца слово. На крају се исписује низ и
// деалоцира меморија.

#include<stdio.h>
#include<stdlib.h>



int main(){
    int *niz;
    int maks = 5;
    int br = 0;
    int broj;
    niz = (int*)malloc(maks*sizeof(int));
    while(scanf("%d",&broj) == 1){
        niz[br] = broj;
        br++;
        if(br >= maks){
            maks += 5;
            niz = (int*)realloc(niz,maks*sizeof(int));
        }
    }
    for(int i = 0; i < maks; i++){
        printf("%d ",niz[i]);
    }
    free(niz);
 

    return 0;
}