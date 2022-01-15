/*9.16. Саставити програм који рачуна и исписује вредност Ојлерове функције позитивног целог
броја унетог са улаза. Под Ојлеровом функцијом φ(n) подразумевамо број бројева m, таквих да је
1≤m<n и да су m и n узајамно прости. Ојлерова функција, као и NZD(m,n) рачунати у посебним
функцијама. */

#include<stdio.h>
int nzd(int a,int b){
    int r;
    r=a%b;
    if(r==0){
        return b;
    }
    else{
        return nzd(b,r);
    }
    
}

int Ojler(int n)
{
 int br=0, m;
 /*Prolazimo kroz sve prirodne brojeve m
 koji su manji od n, i za svaki koji je
 uzajamno prost sa n uvecavamo brojac*/
 for(m = 1; m < n; m++)
 if(nzd(n,m) == 1) br++;
 /*Vracamo broj uzajamno prostih brojeva
 sa brojem n*/
 return br;
}
int main()
{
 int n;
 printf(" n= ");
 scanf("%d", &n);
 printf(" Ojler(%d)= %d\n", n, Ojler(n));

 return 0;
}
