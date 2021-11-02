#include <stdio.h>
#include <stdlib.h>
int main(){
int operacija, m, n;
    printf("koju radnju sa matricama želite da obavite? ");
    printf("\n 1) sabiranje");
    printf("\n 2) oduzimanje");
    printf("\n 3) množenje skalarom");
    printf("\n 4) proizvod matrica \n");
    scanf("%d", &operacija);
    printf("koliko matrica ima vrsta? ");
    scanf("%d",&m);
    printf("koliko matrica ima kolona? ");
    scanf("%d",&n);    
    int i,j, niz[m][n], niz2[m][n], niz3[m][n], s;
    //kod za zbir
    if(operacija==1 || operacija==2 || operacija==3){
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
        }
    }
    if(operacija==1){
        i=0;
        j=0;
        while(i<m){
            j=0;
            while(j<n){
                niz3[i][j]=niz[i][j]+niz2[i][j];
                j++;
            }
            i++;
        }
    }
    else if (operacija==2){
        i=0;
        j=0;
        while(i<m){
            while(j<n){
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
    i=0;
    if(operacija==1 || operacija==2){
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
                printf("%d", niz3[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
    }
    return 0;
}