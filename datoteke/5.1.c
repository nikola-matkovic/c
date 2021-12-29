/*5.1.
Саставити програм којим се у датотеку podaci.txt уписује првих 10 целих бројева , а затим се
из исте датотеке читају бројеви док се не достигне до краја датотеке, а затим се бројеви исписују на
стандарни излаз (екран).
*/
#include <stdio.h>
#include <string.h>

int main(){
    FILE * dat;
    int i, br;
    dat = fopen("podaci.txt", "w");
    if(dat == NULL){
        printf("Greška prilikom otvaranja datoteke");
    }
    for(i = 1; i<=10; i++){
        fprintf(dat, "%d\n", i);
    }
    fclose(dat);
    dat = fopen("podaci.txt", "r");
    if(dat == NULL){
        printf("Greška prilikom otvaranja datoteke");
    }
    while (1)
    {
        fscanf(dat, "%d", &i);
        if(feof(dat)){
            break;
        }
        printf("%d \n", i);
    }
    return 0;
}