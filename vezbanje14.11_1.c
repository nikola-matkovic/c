/*Саставити програм који ће учитавати један за другим низ бројева. Крај уноса означен је
нулом. Наћи и исписати аритметичку средину учитаних бројева узимајући у обзир само оне бројеве
који су већи или једнаки 2 и мањи или једнаки 6.
*/
#include <stdio.h>
int main() {

int broj, suma, ar_sredina, i;
suma=0;
i=0;
do{
	scanf("%d", &broj);
	if(broj>=2  && broj<=6){
		suma+=broj;
		i++;
	}
}
while(broj!=0);
ar_sredina=suma/i;
printf("arihmetička sredina unetih brojeva je %d", ar_sredina);
return 0;
}