#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100

typedef struct zmija{
    int x; 
    int y;
}ZMIJA;

typedef struct hrana{
    int x; 
    int y;
}hrana;


int m, n, i, j, rx, ry, d=0;

ZMIJA z[MAX];

hrana h;

void nasumicno(){
    ry = (rand() % m) + 1;
    rx = (rand() % n) + 1;
}

void postavi_zmiju(){
    if(d == 0){
        nasumicno();
        z[d].x = rx;
        z[d].y = ry;
    }
    d++;
}

void postavi_hranu(){
    nasumicno();
    for(i=0; i<d; i++) {
        if(z[0].x == rx && z[0].y == ry ){
            postavi_hranu();
        }
        else{
            h.x = rx;
            h.y = ry;
        }
    }
}

void napravi_igraliste(){
    scanf("%d %d", &m, &n);
    postavi_zmiju();
    postavi_hranu();
    m+=2; n+=2;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
           if(i==0 || i==m-1){
                printf("#");        
            }
            else if(j==0 || j==n-1){
                printf("#");
            }
            else if(i==z[0].y && j==z[0].x){
                    printf("*");
            }
            else if(i==h.y && j==h.x){
                    printf("@");
            }
            else{
                //postavi_hranu();
                printf(" ");
            }
        }
        printf("\n");
    }
}

void main(){
    srand(time(0));
    napravi_igraliste();
}