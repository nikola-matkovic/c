/*napraviti program koji množi beskonačno unetih brojeva sve dok ne uneseš nulu . 
Uraditi za domaci dzonica zadao
#include<stdio.h>
int main(){
    unsigned long long s=1,a=1;
    while(1){
        printf("Uneti broj");
        scanf("%lld",&a);
        if(a==0) break;
        s*=a;
    }
    printf("proizvod unetih brojeva je=%lld",s);

    
    return 0;
}

Napisati program kojim se na osnovu unetog trocifrenog broja N formiraju trocifreni brojevi sa istim ciframa ali 
takvi da im srednja cifra nije manja od dve susedne 
(Na primer, ako se učita 139, to su brojevi 193 i 391; ako se učita 535, to su 553 i 355; za 778, to je 787...).
*/

#include<stdio.h>
int main(){
    int i,trocifren_broj;
    printf("Uneti brojeve m,n i k:");
    scanf("%d %d %d",&trocifren_broj);
    
}