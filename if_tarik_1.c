#include <stdio.h>
int main(){

    int a, b, c, najveci;
    scanf("%d %d %d",&a, &b, &c);
    najveci=a;
    if(b>najveci){
        najveci=b;
    }
    if(c>najveci){
        najveci=c;
    }
    printf("najveći broj je %d", najveci);

    return 0;
}