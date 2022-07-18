// 3.16. Саставити програм за налажење уније, пресека и разлике два скупа реалних бројева. Скупове
// сместити у динамичку зону меморије.

#include<stdio.h>
#include<stdlib.h>

int main(){
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
     printf("Unesite duzinu za s3:");
    scanf("%d",&n3);
    printf("Unesite  elmente za s3\n");
    s3 = (int*)malloc(n3*sizeof(int));
    for(int i = 0; i < n3; i++){
        scanf("%d",&s3[i]);
    }

    return 0;
}