/*Napisati program za međusobnu razmenu vrednosti
 dve celobrojne primenljive bez korišćenja drugih 
 promenljivih.
 */
#include <stdio.h>
int main(){
    int a, b;
    printf("unesite dva broja:  ");
    scanf("%i %i",&a, &b);
    a = a + b;   
    b = a - b;   
    a = a - b;   
    printf("%i %i", a, b);
    return 0;
}