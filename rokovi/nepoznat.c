#include <stdio.h>
#include<stdlib.h>

int main(){
    int n, temp;
    printf("Unesite n:");
    scanf("%d", &n);
    for(int h = 0; h<24; h++){
        for(int m = 0; m<60; m++){
            for(int s = 0; s<60; s++){
                temp = 0;
                if(h>9){
                    temp += h / 10;
                    temp += h % 10;
                }
                else{
                    temp += h % 10;
                }

                if(m>9){
                    temp += m / 10;
                    temp += m % 10;
                }
                else{
                    temp += m % 10;
                }
                if(s>9){
                    temp += s / 10;
                    temp += s % 10;
                }
                else{
                    temp += s % 10;
                }
                
                if(temp == n){
                    printf("%d sat %d min %d sec \n", h, m, s );
                }
            }
        }
    }
    return 0;
}