#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int number, min, max;
	system("cls");
	printf("What is the minimum number?\n");
	scanf("%d", &min);
	printf("What is the maximum number?\n");
	scanf("%d", &max);
	
	printf("\nThe numbers:\n");
	srand(time(0));
	number = (rand() % (max - min + 1)) + min;
	printf("%d ", number);
	return 0;
}