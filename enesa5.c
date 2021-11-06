//traži najveći broj
#include <stdio.h>
int main(){
    int a, b, c, najveci;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    najveci=a;
    if(b>najveci)
    {
        najveci=b;
    }
    if(c>najveci)
    {
        najveci=c;
    }
    printf("najveći broj je: %d", najveci);
    return 0;
}