// 2.Na programskom jeziku C napisati funkciju koja za dva niza karaktera preneta preko parametara utvrdjuje
// da li su anagrami ili ne. Dva niza su anagrami ako se sastoje od istog broja istih karaktera.
// Na primer, nizovi "anagram” i "ramgana” jesu anagrami, dok "anagram” i "angrm” nisu. U glavnom programu
// sa tastature učitati dve reči i korišćenjem formirane funkcije proveriti da li su unete reči anagrami.
// Prikazati rezultat provere.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>



bool prvoveraDaLiSuAnaframi(char *prvaRec, char *drugaRec){
    //Prvo uzmemo duzine prve i druge reci
    int duzina1 = strlen(prvaRec);
    int duzina2 = strlen(drugaRec);
    //Zatim napravimo dva brojaca duzine 26 jer imamo ukupno 26 karaktera
    //i stavimo sve elemente da budu 0
    int prviBrojacReci[26] = {0};
    int drugiBrojacReci[26] = {0};
     //Zatim prodjemo kroz obe reci i za svako slovo povecamo brojac za 1 na poziciji tog slova
     //poziciju svakog slova dobijamo tako sto oduzmemo od a
     //Npr f ima vrednost u ascii kodu 102 a kada ga oduzmemo sa a koji ima vrednost 97
     //dobijamo vrednost 5 odnosno poziciju na kojoj se nalazi f 
    for(int i = 0;i < duzina1;i++){
        int manji = tolower(prvaRec[i]);
       prviBrojacReci[manji - 'a']++;
    }
    for(int i = 0;i < duzina2;i++){
        int manji = tolower(drugaRec[i]);
        drugiBrojacReci[manji - 'a']++;
    }
    printf("Prva rec:");
        for(int i = 0;i < 26;i++){
        printf("%d",prviBrojacReci[i]);
        }

        printf("\nDruga rec:");
        for(int i = 0;i < 26;i++){
        printf("%d",drugiBrojacReci[i]);
        }
    //Sada kada smo ubacili koliko slova ima u nizu na njihovim pozicijama
    //uporedimo ta dva niza ukoliko su isti anagrami su u spuprotnom nisu anagrami
    for(int i = 0;i < 26;i++){
        printf("%d",prviBrojacReci[i]);
        printf("%d",drugiBrojacReci[i]);
        if(prviBrojacReci[i] != drugiBrojacReci[i])
            return false;

        return true;
    }
}

int main(){
    char prvaRec[] = "Listent";
    char drugaRec[] = "Silent";

    if(prvoveraDaLiSuAnaframi(prvaRec, drugaRec)){
        printf("Anagrami su!");
    }
    else{
        printf("Nisu anagrami");
    }
    return 0;
}