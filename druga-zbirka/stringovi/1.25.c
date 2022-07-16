// 1.25. Саставити програм који учитава стринг, који представља реченицу, и који проверава да ли је
// реченица исправно унета. Исправно унета реченица задовољава следеће услове:
// - реченица мора почети великим словом и завршити се тачком;
// - речи су произвољни подстрингови који могу садржати само мала слова.
// - речи могу бити раздвојени једним размаком (SPACE), зарезом или тачка-зарезом.
// На излазу исписати обавештење да ли је реченица исправно унета. 

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define SIZE 100

int main(){
    char recenica[SIZE];
    int i;
    int n;
    bool flag = true;
    printf("Unsite recenicu:\n");
    scanf("%s",recenica);
    n = strlen(recenica);
    if((recenica[0] > 'A' || recenica[0] < 'Z') || recenica[n-1] != '.'){
        flag = false;
    }
    if(flag == true){
        for(i = 0; i < n; i++){
            if(recenica[i] > 'a' || recenica[i] < 'z' && recenica[i] != ' ' && recenica[i] != ',' && recenica[i] != ';'){
                flag = false;
            }
            if(recenica[i + 1] == ' ' && recenica[i + 1] == ',' && recenica[i + 1] == ';'){
                flag = false;
            }
            else{
                flag = true;
            }
              

        }
    }
    if(flag == true){
        printf("\nRecenica je ispravno uneta");
    }
    else{
        printf("\nRecenica nije ispravno uneta");
    }
    
    return 0;
}