#include <stdio.h>
int main(){
    int n, i, j , s, t, r, d, o, v, h ; 
    n=3;
    int niz[n][n],  niz2[n][n+2];
    while(i<n){
        j=0;
        printf("unesite vrstu %d:\n ", i+1);
        while(j<n){
            scanf("%d", &niz[i][j]);
            niz2[i][j]=niz[i][j];
            j++;
        }
        i++;
    }
    printf("unesite odgovarajuću operaciju : \n");
    printf("1. Sarusov metod \n");
    printf("2. traženje minora \n");
    printf("3. tražnje kofaktora\n");
    printf("4. razvoj po vrsti \n");
    printf("5. razvoj po koloni \n");
    o=0;
    do{
    scanf("%d", &o);
    }
    while(o<1 || o>5);
    if(o==1){
        for(j=0; j<=1; j++ ){
            for(i=0; i<n; i++){
                niz2[i][j+3]=niz[i][j];
            }
        }
        //ispis sarusovog pravila:
        for(i=0; i<n; i++){
            for(j=0; j<n+2; j++){
                printf("%d ", niz2[i][j]);
            }
            printf("\n");
        }
        s=0;
        for(j=0; j<n; j++){
            t=1;
            for(i=0; i<n; i++){
                t*=niz2[i][i+j];
            }
            s+=t;
        }
        r=0;

        for(i=0;i<n; i++){
            t=niz2[0][2+i]*niz2[1][1+i]*niz[2][0+i];   
            r+=t;
        }
        d=s-r;
        printf("%d", d);
    }
    else if(o=2){
        printf("unesite  vrstu i kolonu  u kojoj želite izračunati minor");
        int niz3[n-1][n-1];
        scanf(" %d %d", &h, &v );       
        for(i=0; i<n-1; i++){
            for(j=0; j<n-1; j++){
                if(h-1>i && v-1>j){           
                    t=niz[i][j];
                }
                niz3[i][j]=t;
            }
        }
        for(i=0; i<n-1; i++){
            for(j=0; j<n-1; j++){
                printf("%d ", niz3[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}