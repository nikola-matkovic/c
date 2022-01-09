#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int m, n, i, j, rx, ry;

int zmija []

void nasumicno(){
    rx = (rand() % (n- 1 + 1)) + 1;
    ry = (rand() % (m- 1 + 1)) + 1;
}

void napravi_igraliste(){
    scanf("%d %d", &m, &n);
    m+=2; n+=2;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
           if(i==0 || i==m-1){
                printf("#");        
            }
            else if(j==0 || j==n-1){
                printf("#");
            }
            else{
                 printf(" ");
            }
    
        }
        printf("\n");
    }
}

void  main(){
    srand(time(0));
    napravi_igraliste();
}