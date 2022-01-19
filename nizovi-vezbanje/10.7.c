/*10.7. Саставити програм за израчунавање и исписивање аритметичке средине
задатог низа (дужине n) целих бројева. */

#include <bits/thread-shared-types.h>
#include <stdio.h>
#define MAX 100

int main() {
  int i, n, niz[MAX], s = 0,t;
  printf("Unesite n:");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &niz[i]);
    s+= niz[i];
    t=s/n;
  }
  printf("Aritmeticka sredina od %d je =%d",i,t);
  return 0;
}
