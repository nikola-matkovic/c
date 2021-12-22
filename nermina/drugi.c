#include <stdio.h>

int sabiranje(int prvi, int drugi){
	return prvi + drugi;
}

int main(){
	int zbir = sabiranje(5, 3);
	printf("%d", zbir);
	return 0;
}