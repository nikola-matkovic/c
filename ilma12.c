/*3. Napisati program kojim se učitava
vrednost nekog broja sa tastature i ispisuje
da li je on decimalan broj ili ceo broj.
*/
#include <stdio.h>
int main(){
    float a;
    printf("Unesite broj : ");
    scanf("%f",&a);
    if(a- (int)a==0){
        printf("Broj je ceo");
    }
    else{
        printf("Broj nije ceo");
    }
    return 0;
}