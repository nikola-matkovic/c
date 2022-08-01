// 5.16. У датотеци nizA.txt у сваком реду се налази један цео број n и n реалних бројева. Саставити
// програм који у нову секвенцијалну датотеку nizB.txt упише оне редове из почетне датотеке у којим
// је средња вредност реалних бројева већа од нуле и на крају испише на главном излазу збир средњих
// вредности реалних бројева у свим редовим почетне датотеке

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100

int main(){
    FILE *prva;
    FILE *druga;
    int i,n;
    float broj[SIZE];
    prva = fopen("nizA.txt", "r");
    druga = fopen("nizB.txt", "w");


    return 0;
}