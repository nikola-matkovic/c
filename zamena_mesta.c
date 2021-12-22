#includ <stdlib.h>

int main(){
    int a, b, t;
    a=5; 
    b=7;
    // noob
    t=b;                // t = 7
    b=a;                // b = 5
    a=t;                // a = 7
    //pro:
    a = a + b     // a = 5+7 = 12
    b = a - b     // b = 12 - 7 = 5
    a = a - b     // a = 12 - 5 = 7
    //niko nikad: 
    a = a * b     // a = 5 * 7 = 35
    b = a / b     // b = 35 / 7 = 5
    a = a / b     // a = 35 / 5 = 7
    //PRO:
    a = a ^ b;    // a = 5 ^ 7 = 2
    b = a ^ b;    // b = 2 ^ 7 = 5
    a = a ^ b;    // a = 2 ^ 5 = 7
    return 0;
}