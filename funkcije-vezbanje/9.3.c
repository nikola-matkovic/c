/*9.3. Саставити функцију за одређивање максимума два цела броја, а затим саставити програм
који ће за унета четири цела броја одредити највећи користећи претходну функцију, а затим
исиписати резултат. */

#include<stdio.h>

int max(int a,int b){
    if(a==b) return 0;
    int max=1;
    if(a>b){
        max=a;
    }
    else max=b;

    return max;
    
}


int main(){
    int a,b,c,d,m;
    printf("Unesi 4 broja=");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    m=(max(a,b),max(c,d));
    if(m==0){
        printf("svi brojevi su isti");

    }
    else printf("Najveci broj je %d \n ",m);
        
    

    
   
    
}