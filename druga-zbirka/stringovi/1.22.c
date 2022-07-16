// 1.22. Саставити програм који у задатом стрингу исписује дужину најдужег низа узастопно
// једнаких знакова. Исписати тај низ. 

#include<stdio.h>
#include<string.h>

#define SIZE 100

int main(){
    char recenica[SIZE];
    char znak;
    int br = 0;
    int n;
    int maks = 0;
    int i;
    n = strlen(recenica);
    printf("Unesite string:\n" );
    scanf("%s", recenica);
    for ( i = 0; i < n; i++){
        if(recenica[i] == recenica[i+1]){

            br++;
            printf("%d",br);
        }
        if(br > maks){
            maks = br;
            znak = recenica[i];
        }
    }
    printf("Duzina najduzeg niza sa uzastonim ponavljanjima je:%d",maks);
    printf("To su znakovi:\n");
    for(i = 0;i < maks;i++){
        printf("%c",znak);
    }
    
    
    

    return 0;
}