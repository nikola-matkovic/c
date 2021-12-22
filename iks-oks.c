#include <stdio.h>

void main(){
	int polja[3][3], n, x, y;
	while(1){
		do{	
			printf("unesite broj polja");
			scanf("%d", &n);
		}
		while(n<1 || n>9);
		x = n%3;
		if(x%3 == 0){
			x=3;
		}
		if(x>0){
			y=1;
		}
		if(x>3){
			y=2;
		}
		if(x>6){
			y=3;
		}
		printf("%d %d", x, y);
	}
}