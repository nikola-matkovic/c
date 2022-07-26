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
    int i,n,j;
    int temp;
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
    for(i = 0;i < n-1;i++){
        for(j = 0;j < n-1;j++){
    if(studenti[j].ocena > studenti[j + 1].ocena){
        temp = studenti[j].ocena;
        studenti[j].ocena = studenti[j + 1].ocena;
        studenti[j + 1].ocena = temp;

        // studenti[j].ocena = studenti[j].ocena ^ studenti[j + 1].ocena;
        // studenti[j + 1].ocena = studenti[j].ocena ^ studenti[i + 1].ocena;
        // studenti[j].ocena = studenti[j].ocena ^ studenti[j + 1].ocena;
        }
        
    }
}
    for(i = 0;i < n;i++){
        printf("%s %s ima ocenu %d\n",studenti[j].ime,studenti[j].prezime,studenti[j].ocena);
    }

    return 0;

}