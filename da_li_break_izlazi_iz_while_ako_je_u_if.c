#include <stdio.h>
int main() {
    int i=0;
    while(i<10){
        if(i==5) break;
        printf("%d", i);
        i++;
    }

}