// 3.16. Саставити програм за налажење уније, пресека и разлике два скупа реалних бројева. Скупове
// сместити у динамичку зону меморије.

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    int *s1,*s2,*s3;
    int n1,n2,n3,i,j;
    printf("Unesite duzinu za s1:");
    scanf("%d",&n1);
    printf("Unesite  elmente za s1\n");
    s1 = (int*)malloc(n1*sizeof(int));
    for(int i = 0; i < n1; i++){
        scanf("%d",&s1[i]);
    }
     printf("Unesite duzinu za s2:");
    scanf("%d",&n2);
    printf("Unesite  elmente za s2\n");
    s2 = (int*)malloc(n2*sizeof(int));
    for(int i = 0; i < n2; i++){
        scanf("%d",&s2[i]);
    }
  
    
    //Unija skupova
    n3 = n1 + n2;
    s3 = (int*)malloc(n3*sizeof(int));
    for(int i = 0; i < n1; i++){
        s3[i] = s1[i];
    }
    int br = n1-1;
    // s3 = (int*)realloc(s3, n3*sizeof(int));
    for(int j = 0; j < n2; j++){
        for(int i = 0; i < n1; i++){
            if(s1[i] != s2[j]){
                br++;
                s3[br] = s2[j];
            }
        }
    }
    printf("\nIspis za unije dva skupa:\n");
     for(int i = 0; i < n3; i++){
         printf("%d ",s3[i]);
     }

   
   

    return 0;
   
}