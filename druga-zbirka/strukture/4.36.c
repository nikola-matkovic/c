// 4.36. Саставити програм за распоређивање студената по салама за полагање испита. На почетку
// програма треба учитати број студената и укупан број сала. Структура садржи податке о салама:
// редни број сале и број места у свакој од сала. Сале треба попуњавати редом, почев од оних са
// највећим бројем места. На крају треба исписати редне бројеве оних сала, које ће се користити за
// полагање испита. Користити динамичку алокацију меморије приликом резервисања места у салама. 

#include<stdio.h>
#include<stdlib.h>

typedef struct sala{
    int redniBrSale;
    int brMesta;
}SALA;

int main(){
    int i,j;
    struct sala temp;
    int slobodnaMesta = 0;
    struct sala *ukupnoSala;
    int brojSala,brojStudenata;
    printf("Unesite broj sala:");
    scanf("%d",&brojSala);
    printf("Unesite broj studenata:");
    scanf("%d",&brojStudenata);
    ukupnoSala = (struct sala*)malloc((brojSala+1)*sizeof(struct sala));

    for(i = 0;i < brojSala;i++){
        ukupnoSala[i].redniBrSale = i + 1;
        printf("Unesite broj mesta na %d sali:\n",i+1);
        scanf("%d",&ukupnoSala[i].brMesta);
    }
    for(i = 0; i < brojSala-1; i++){
        for(j = 0; j < brojSala-1-i; j++){
            if(ukupnoSala[j].brMesta < ukupnoSala[j + 1].brMesta){
                temp = ukupnoSala[j];
                ukupnoSala[j] = ukupnoSala[j + 1];
                ukupnoSala[j + 1] = temp;
              
            }
        }
    }
      for(i = 0;i < brojSala;i++){
        slobodnaMesta += ukupnoSala[i].brMesta;
        if(slobodnaMesta <= brojStudenata){
           
            printf("%d.Sala ima %d mesta\n",ukupnoSala[i].redniBrSale,ukupnoSala[i].brMesta);
        }
        else{
            printf("Sala %d nema potrebe da se koristi\n",ukupnoSala[i].redniBrSale);
        }
        
        
    }



    return 0;
}