#include <stdio.h>
#include <stdlib.h>

//broj deljiva sa svim svojim ciframa!
int main(){
    int  broj, semafor, zcifra, pocetnibroj;
    printf("Unesite broj za proveru da li je deljiv svim svojim ciframa");
    scanf("%d", &broj);
    pocetnibroj=broj;
    semafor=1;
    while (broj >0)
    {
        zcifra= broj%10;
        if(pocetnibroj % zcifra != 0)
        {
            semafor=0;
        }
        broj/=10;
    }
    if(semafor==1){
        printf("Uneti broj je jeste deljiv sa svim svojim ciframa");
    }
    else{
        printf("uneti broj nije deljiv sa svim svojim ciframa");
    }
    return 0;
}