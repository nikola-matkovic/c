#include <stdio.h>
#include <string.h>
#define max 20
int main(){
    char rec[max];
    int i;
    printf("Unesi reč za proveru: ");
    scanf("%s", rec);
    int l = (int) strlen(rec);
    for(i=l-1; i>=0; i--){
        if(i<l-i-1){
            break;
        }
        printf("%c, %c \n", rec[i], rec[l-i-1]);
        printf("rec[%d] pre zamene je [%c]\n",i, rec[i]);
        rec[i]=rec[i]^rec[l-i-1];
        rec[l-i-1]=rec[i]^rec[l-i-1];
        rec[i]=rec[i]^rec[l-i-1];
        printf("rec[%d] nakon zamene je [%c]\n", i, rec[i]);
    }
    printf("%s", rec);
    return 0;
}