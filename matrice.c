#include <stdio.h>
int main(){
    int operacija, m, n, i, j , s, p; 
    do{// odabir operacije 
        printf("koju radnju sa matricama želite da obavite? ");
        printf("\n 1) sabiranje");
        printf("\n 2) oduzimanje");
        printf("\n 3) množenje skalarom");
        printf("\n 4) proizvod matrica \n");
        scanf("%d", &operacija);
    }
    while(operacija<1 || operacija>4); /*u svakom slučaju mora se uneti prva matrica, nezavisno od operacije */
    printf("koliko matrica ima vrsta? "); 
    scanf("%d",&m);
    printf("koliko matrica ima kolona? ");
    scanf("%d",&n);
    int niz[m][n], niz2[m][n], niz3[m][n];
    i=0;
    while(i<m){
        j=0;
        printf("unesite vrstu %d:\n ", i+1);
        while(j<n){
            scanf("%d", &niz[i][j]);
            j++;
        }
        i++;
    }
    if(operacija==1 || operacija==2){
        printf("****Sada unesite drugu matricu******** \n");
        i=0;
        while(i<m){
            j=0;
            printf("unesite vrstu %d:\n ", i+1);
            while(j<n){
                scanf("%d", &niz2[i][j]);
                j++;
            }
            i++;
        }
        i=0;
        j=0;
        while(i<m){
            j=0;
            while(j<n){
                if(operacija==1)
                    niz3[i][j]=niz[i][j]+niz2[i][j];
                else 
                    niz3[i][j]=niz[i][j]-niz2[i][j];
                j++;
            }
            i++;
        }
    }
    else if(operacija==3){
        printf("unesite  skalarnu velicinu sa kojom mnozite  matricu\n");
        scanf("%d", &s);
        i=0;
        while(i<m){
            j=0;
            while(j<n){
                niz2[i][j]=niz[i][j]*s;
                j++;
            }
            i++;
        }
    }
    else{
        //unos za 4:
        printf("Koliko kolona ima druga matrica?");
        scanf("%d", &p);
        int niz4[n][p];
        printf("****Sada unesite drugu matricu******** \n");
        i=0;
        while(i<n){               // a[mxn] b[nxp]   c=m*p
            j=0;
            printf("unesite vrstu %d:\n ", i+1);
            while(j<p){
                scanf("%d", &niz4[i][j]);
                j++;
            }
            i++;
        }
        //računanje
        int niz5[n][p];
        int k, l,t; 
        for(l=0; l<n; l++){
            for(k=0; k<p; k++) {
                t=0;
                for(i=0; i<n; i++){
                    t+= niz[l][i] * niz4[i][k];
                }
                niz5[l][k]=t;
            }
        }
        //ispis
        int i=0;
        printf("Prva matrica:\n");
        while(i<m){
            j=0;
            while(j<n){
                printf("%d ", niz[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
        i=0;
        printf("Druga matrica :\n");
        while(i<n){
            j=0;
            while(j<p){
                printf("%d ", niz4[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
        printf("Rešenje: \n");
        i=0;
        while(i<m){
            j=0;
            while(j<p){
                printf("%d ", niz5[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
    }
    //ispis 
    i=0;
    if(operacija==1 || operacija==2){
        printf("******* REŠENJE ********** \n");
        printf("Prva matrica:\n");
        while(i<m){
            j=0;
            while(j<n){
                printf("%d ", niz[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
        printf("Druga matrica:\n");
        i=0;
        while(i<m){
            j=0;
            while(j<n){
                printf("%d ", niz2[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
        printf("Rešenje operacije: \n");
        i=0;
        while(i<m){
            j=0;
            while(j<n){
                printf("%d ", niz3[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
    }
    else if(operacija==3){
        printf("rešenje je: \n");
        i=0;
        while(i<m){
            j=0;
            while(j<n){
                printf("%d ", niz2[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
    }
}