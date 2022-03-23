#include <stdio.h>
#include <math.h>

int main(){
    int n, i, t,j, max = 0, staroMax = 10;
    
    int brojcifara = 6;

    n = 54219;
    for(j = 0; j<brojcifara; j++){
        t = n;
        for(i=0; i<brojcifara; i++){
            while (t/10 != 0){
                if(max < t%10 && max <= staroMax){
                    max = t%10;
                } 
                t/=10;
                staroMax = max;
            }
            if(max < t%10 && max <= staroMax){
                max = t%10;
            }
           
        }
        printf("%d %d \n", max, staroMax);
    }
    return 0;
}