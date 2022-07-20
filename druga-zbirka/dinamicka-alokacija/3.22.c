// 3.22. Саставити програм који формира матрицу реалних бројева димензија mxn. Програм треба да
// израчуна колико постоји елемената матрице који су једнаки аритметичкој средини својих суседа и
// испише њихове позиције у матрици. Матрицу сместити у динамичку зону меморије. Програм треба
// да обради произвољан број улазних матрица. 

#include<stdio.h>
#include<stdlib.h>

void ispisMatrice(int **matrix,int m,int n){
      printf("Ispis zadate matice je:\n");
     for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int izracunajASsuseda(int **matrix,int m,int n){
    int i,j;
    int brojTrazenihEl = 0;
    int brojSusenihEl = 0;
    int suma = 0;

    for(i = 0;i < m;i++){
        for(i = 0;i < n;i++){
            //Provera da li postoji red iznad
            if((i-1) >= 0){
                suma += matrix[i-1][j];
                brojSusenihEl++;
            }
            //Provera da li postoji kolona levo
            if((j-1) >= 0){
                suma += matrix[i-1][j-1];
                brojSusenihEl++;
            }
            //Provera da li postoji kolona desno
            if((j+1) < n){
                suma += matrix[i-1][j+1];
                brojSusenihEl++;
            }
            //Provera da li postoji red ispod
            if((i+1) < m){
                suma += matrix[i+1][j];
                brojSusenihEl++;
            }
            //Provera da li postoji kolona levo 
            if((j-1) >= 0){
                suma += matrix[i+1][j-1];
                brojSusenihEl++;
            }
            //Provera da li postoji kolona desno
            if((j+1) < n){
                suma += matrix[i+1][j+1];
                brojSusenihEl++;
            }
            //Provera da li postoji kolona levo 
            if((j-1) >= 0){
                suma += matrix[i][j-1];
                brojSusenihEl++;
            }
            //Provera da li postoji kolona desno
            if((j+1) < n){
                suma += matrix[i][j+1];
                brojSusenihEl++;
            }
            if(brojSusenihEl > 0){
                suma /= brojSusenihEl;
            }
            if(matrix[i][j] == suma){
                printf("Pozicija trazenog el: [%d,%d]\n",i,j);
                brojTrazenihEl++;
                brojTrazenihEl = 0;
                suma = 0;
            }
        }
    }
    return brojTrazenihEl;

}

int main(){
    system("clear");
    int i,j,m,n;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int **matrix = (int**)malloc(m*sizeof(int));

    for(i = 0; i < n; i++){
        matrix[i] = (int*)malloc(n*sizeof(int));
        for(j = 0; j < m; j++){
        }
    }
    printf("Uneiste matricu:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    ispisMatrice(matrix,m,n);
  
    return 0;
}