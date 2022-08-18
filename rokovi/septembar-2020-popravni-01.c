/*DRŽAVNI UNIVERZITET U NOVOM PAZARU

OSNOVI PROGRAMIRANIA

1. Sa ulaza se učitavajo prirodni brojevi ai b. Napisati program kojim se ispituju svi prirodne broje ir nervate

Ja,b) koji su deljivi svim svojim ciframa, ne uzimajući u obzir poslednju citru

Na primer, ako je interval 128 do 1521, prvi broj zadovljava uslov jer je deljiv sa 12 ne mora da bude

*/
#include<stdio.h>
#include<stdbool.h>

int main(){
    int a;
    int b;
    int trenutnaCifra; 
    //unos cifara:
    printf("Unsite a:");
    scanf("%d",&a);
    printf("Unsite b:");
    scanf("%d",&b);
    //prolaz kroz ceo interval:
    for(int i = a; i <= b; i++){
        bool flag = true;
        int temp = i;
        //uklanjamo zadnju cifru:
        temp /= 10;
        //provera da li može da se podeli sa svakom cifrom
        while(temp != 0){
            trenutnaCifra = temp % 10;
            if(trenutnaCifra == 0) {
                flag = false;
                break;    
            }
            if(i % trenutnaCifra != 0){
                flag = false;
                break;
            }
            temp /= 10;
        }
        if(flag == true){
            printf("%d ", i);
        }
    }
    return 0;
}