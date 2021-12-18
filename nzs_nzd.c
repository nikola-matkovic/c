/*9.9.
Саставити програм који коришћењем функција одређује највећи заједнички делилац и
најмањи заједнички садржалац два природна броја. Програм треба да захтева унос све док не
прочита нулу за један од два унета природна броја.
*/
#include <stdio.h>

int nzd_f(int a, int b){             // 1. funkcija za izračunavanje nzd-a
	int s = 1;							// 2. s je jedan jer se množi ( neutralan element)
	int i = 2;							// 3. deljenje startaš sa 2
	while(i <= a && i <= b){			// 5. to sve treba da ponavlja dok je i manje od a i b, kada bude veće kraj programa (jer broj nije deljiv brojem većim od sebe)
		while(a % i == 0 && b % i == 0 ){ //4.dok su oba deljiva sa 2  deliš ih i  množiš s,  kada dođe do kraja  i će se uvećati i probati da deli sa 3, 4....
			s *= i;														
			a /= i;
			b /= i;
		}
		i++;
	}
	return s;							//6 funkcija vraća s
}
int nzs_f(int a, int b){               // 7 nzs je samo nzd  pomnožen sa  brojevima koji su ostali nepodeljieni
	int nzd = nzd_f(a, b);				//8 računa nzd
	a /= nzd;							// 9 nalazi koliko je  a pri računananju nzd-a	
	b /= nzd;							// isto i za  b 		
	return nzd * a * b;					// množi sve to da bi dobio nzs
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