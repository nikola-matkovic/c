// 3.24. Саставити програм који за квадратну матрицу целих бројева димензија nxn одређује
// детерминанту преко Лапласовог развоја. Исписати матрицу и вредност детерминанте. Матрицу
// сместити у динамичку зону меморије. 

#include<stdio.h>
#include<stdlib.h>
int Determinanta(int **matrica, int n){
   

 int **podmatrica, i,j, det=0, znak=1, vrsta, kolona;
 
 podmatrica = (int**)malloc((n-1)*sizeof(int));
 for(i = 0; i < n; i++){
    podmatrica[i] = (int*)malloc((n-1)*sizeof(int));
    for(j = 0; j < n; j++){
    }
 }
for(i=0; i<n; i++){
    for(kolona=0; kolona<i; kolona++){
        for(vrsta=1; vrsta<n; vrsta++){
            podmatrica[vrsta-1][kolona] = matrica[vrsta][kolona];
        }
    }

 for(kolona=i+1; kolona<n; kolona++){
    for(vrsta=1; vrsta<n; vrsta++){
        podmatrica[vrsta-1][kolona-1] = matrica[vrsta][kolona];
      
    }
    det += znak*matrica[0][i]*Determinanta(podmatrica,n-1);
    znak*=-1;
}
 
}
 return det;
} 


int main(){
system("clear");
int i,j,n;
printf("Unesite n:");
scanf("%d",&n);
int **matrix = (int**)malloc(n*sizeof(int));

for(i = 0; i < n; i++){
    matrix[i] = (int*)malloc(n*sizeof(int));
    for(j = 0; j < n; j++){
    }
}
printf("Uneiste elmente matrice:\n");
for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
        scanf("%d",&matrix[i][j]);
    }
}
printf("Ispis matrice koju ste uneli je:\n");
for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}
printf("Determinanta matrice je:\n");

printf("%d",Determinanta(matrix,n));


    return 0;
}

