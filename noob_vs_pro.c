#include <stdio.h>
int main(){
    int n;
    printf("Unesite broj za proveru: ");
    scanf("%d", &n);
    //noob
    if(n % 2 == 0)
    {
        printf("Uneti broj je paran\n");
    }
    else
    {
        printf("uneti broj je neparan\n");
    }
    //average
    if(n % 2 == 0)
        printf("Uneti broj je paran \n");
    else 
        printf("Uneti broj je paran \n");
    //pro
    (n % 2 == 0) ? printf("Uneti broj je paran\n") : printf("Uneti broj je paran\n");
    //LEGEND
    (n & 1) ? printf("Uneti broj je neparan\n") : printf("Uneti broj je paran\n");
    return 0;
}