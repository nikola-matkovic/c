/*5.16. У датотеци nizA.txt у сваком реду се налази један цео број n и n реалних бројева. Саставити
програм који у нову секвенцијалну датотеку nizB.txt упише оне редове из почетне датотеке у којим
је средња вредност реалних бројева већа од нуле и на крају испише на главном излазу збир средњих
вредности реалних бројева у свим редовим почетне датотеке. */
#include <stdio.h>
#include <stdlib.h>
#define  MAX 100
int main(){
    int n, i, j;
    float niz[MAX][MAX], as=0, zbiras=0;
    FILE *a, *b;
    if((a = fopen("nizA.txt", "r"))==NULL){
        printf("Greška prilikom otvaranja datoteke nizA.txt");
        exit(1);
    }
    if((b = fopen("nizB.txt", "w"))==NULL){
        printf("Greška prilikom otvaranja datoteke nizA.txt");
        exit(1);
    }
    while(!feof(a)){
        fscanf(a, "%d", &n);
        for(i=0; i<n; i++){
            fscanf(a, "%f", &niz[j][i]);
            as += niz[j][i];
        }
        as/=n;
        printf("%f", as);
        zbiras += as;
        if(as>0){
            printf("as je veće od 0 \n");
            fprintf(b, "%d ", n);
            for(i=0; i<n; i++){
                fprintf(b, "%f ", niz[j][i]); 
            }
            fprintf(b, "\n"); 
        }
        j++;
    }
    fclose(a);
    fclose(b);
    printf("%d", zbiras);
    return 0;
}