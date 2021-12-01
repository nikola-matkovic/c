#includ <stdlib.h>

int main(){
    int a, b, t;
    a=5; 
    b=7;
    // prvi način
    // a = 7            b=5
    t=b;                // t = 7
    b=a;                // b = 5
    a=t;                // a = 7
    // drugi način:
    a=5; 
    b=7;

    a = a + b     // a = 5+7 = 12
    b = a - b     // b = 12 - 7 = 5
    a = a - b     // a = 12 - 5 = 7
    //treći način:
    a=5; 
    b=7;
    a = a * b     // a = 5 * 7 = 35
    b = a / b     // b = 35 / 7 = 5
    a = a / b     // a = 35 / 5 = 7

    return 0;
}