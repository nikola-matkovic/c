//1.15. Саставити функцију за испис ниске карактера, а затим је тестирати у главном програму. 
#include <stdio.h>

void ispis(char s[]){
    int i;
    for(i=0; s[i]; i++){
        putchar(s[i]);
    }
}
int main(){
    ispis("Zdravo, svete");
    return 0;
}