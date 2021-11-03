#include <stdio.h>
int operacija, m, n, i,j , s, p;
int main(){
    do{// odabir operacije 
    printf("koju radnju sa matricama želite da obavite? ");
    printf("\n 1) sabiranje");
    printf("\n 2) oduzimanje");
    printf("\n 3) množenje skalarom");
    printf("\n 4) proizvod matrica \n");
    scanf("%d", &operacija);
    }
    while(operacija<1 || operacija>4);  /*u svakom slučaju mora se uneti prva matrica, nezavisno od operacije */
    printf("koliko matrica ima vrsta? "); 
    scanf("%d",&m);
    printf("koliko matrica ima kolona? ");
    scanf("%d",&n);
    int niz[m][n], niz2[m][n], niz3[m][n]
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
    else if(operacija==3){
        printf("unesite  skalarnu velicinu sa kojom mnozite  matricu\n");
        scanf("%d", &s);
    }
    else{
        printf("Koliko kolona ima druga matrica?");
        scanf("%d", &p);
    }
}