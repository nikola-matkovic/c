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
    float broj[SIZE],s = 0,zbirSrednjeVrednosti = 0;
    prva = fopen("nizA.txt", "r");
    druga = fopen("nizB.txt", "w");
    if(prva == NULL || druga == NULL){
        printf("Greska");
    }
    printf("Uneiste n:");
    scanf("%d",&n);
    while(!feof(prva)){
        for(i = 0; i < n;i++){
            fscanf(prva, "%f", &broj[i]);
        }
    }
      while(!feof(prva)){
        for(i = 0; i < n;i++){
            s += broj[i];
        }
        if(s > 0){
            fprintf(druga,"%f",broj[i]);
        }
        s/=n;
        zbirSrednjeVrednosti+=s;
    }
    printf("Zbir srednje vednisti je:%f",zbirSrednjeVrednosti);
    fclose(prva);
    fclose(druga);


    return 0;
}