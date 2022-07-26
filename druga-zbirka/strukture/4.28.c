// 4.28. Структура о студентима се састоји од имена, презимена и оцене. Саставити програм којим се
// учитава низ од n студената и сортира их по њиховим оценама. Исписати сортирани списак
// студената. 

#include <bits/pthreadtypes.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100

typedef struct student{
    char ime[30];
    char prezime[30];
    int ocena;
}STUDENT;


int main(){
    struct student studenti[SIZE];
    int i,n;
    printf("Unesite broj studenata:");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        printf("Unesite ime:");
        scanf("%s",studenti[i].ime);
        printf("Unesite prezime:");
        scanf("%s",studenti[i].prezime);
        printf("Unesite ocenu:");
        scanf("%d",&studenti[i].ocena);
    }
    for(i = 0;i < n;i++){
        printf("%s %s ima ocenu %d",studenti[i].ime,studenti[i].prezime,studenti[i].ocena);
    }

    return 0;
}