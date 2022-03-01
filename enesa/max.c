//traži najveći broj
#include <stdio.h>
int main(){
    int a, b, c, max;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    printf("najveći broj je: %d", max);
    return 0;
}