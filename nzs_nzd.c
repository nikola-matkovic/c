/*9.9.
Саставити програм који коришћењем функција одређује највећи заједнички делилац и
најмањи заједнички садржалац два природна броја. Програм треба да захтева унос све док не
прочита нулу за један од два унета природна броја.
*/
#include <stdio.h>

int nzd_f(int a, int b){
	int s = 1;
	int i = 2;
	while(i <= a && i <= b){
		while(a % i == 0 && b % i == 0 ){
			s *= i;
			a /= i;
			b /= i;
		}
		i++;
	}
	return s;
}
int nzs_f(int a, int b){
	int nzd = nzd_f(a, b);
	a /= nzd;
	b /= nzd;
	return nzd * a * b;
}
void main(){
	int a, b, nzs, nzd;
	printf("Unesite a, b: ");
	scanf("%d %d", &a, &b);
	nzd = nzd_f(a, b);
	printf("NSD: %d \n", nzd);
	nzs = nzs_f(a, b);
	printf("NZS: %d \n", nzs);
}