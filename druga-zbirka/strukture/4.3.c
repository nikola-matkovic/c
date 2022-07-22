// 4.3. а) Саставити структуру која садржи дан, месец и годину, затим у главном програму
// користећи ову структуру унети податке о дану, месецу и години и исписати датум.
// б) Саставити структуру која садржи податке о раднику (име, презиме и месецна плата),
// затим у главном програму користећи ову структуру унети податке о раднику и исписати исте. 

#include<stdio.h>
#include<stdlib.h>

typedef struct datum{
    int dan;
    int mesec;
    int godina;

}DATUM;

int main(){
    struct datum Datum = {12,8,2002};
    if(Datum.dan < 10 && Datum.mesec > 9){
        printf("0%d.%d.%d",Datum.dan,Datum.mesec,Datum.godina);
    }
    if (Datum.dan > 9 && Datum.mesec < 10){
        printf("%d.0%d.%d",Datum.dan,Datum.mesec,Datum.godina);
    }
       if (Datum.dan < 10 && Datum.mesec < 10){
        printf("0%d.0%d.%d",Datum.dan,Datum.mesec,Datum.godina);
    }
    
        
    
   

    return 0;
}