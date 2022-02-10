/*9.29. Саставити рекурзивну функцију за одређивање факторијела целог броја, а затим је тестирати
у главном програму за унети цео број n и исписати добијени резултат.*/

#include<stdio.h>

int faktorijal(int n){
    int i,s=1;
    if(n==1){
        return 1;
    }
        else{
            s=n*faktorijal(n-1);
        }
}
int main(){
    int n;
    printf("Unesite n:");
    scanf("%d",&n);
    printf("Faktorijal od %d je=%d",n,faktorijal(n));
   
    return 0;

}