#include <stdio.h>
int kubiraj (int x) {
int y = x * x * x;
return y;
}
int main() {
int a = 10;
int b = kubiraj (a);
printf ("%d^3 = %d\n", b, a); /* 10^3 = 1000 */
return 0;
}