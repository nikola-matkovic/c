/*4.28... program treba da crta eto kao ...
* * * * *
* * * * *
* * * * *
* * * * *

* * * * *
*       *
*       *
*       *
* * * * *

*
* *
* * *
* * * *
* * * * *

* * * * *
* * * *
* * *
* * 
*

*
* *
*   *
*     *
* * * * *

* * * * *
*     *
*   *
* *
*

* * * * *             //0*raznak + 5x*                                for(i=n; i>=1; i--)
 * * * *              //1*razmak + 4x                                     for(j=0; j>n-i; i++ )      
  * * *               //2* razmak + 3x*                                       printf(" ")      
   * *                //3*razmak  + 2x*                                   for(j=0; j<=i; j++)
    *                 //2*razmak  + 1x*                                       printf(* )

*/
#include <stdio.h>
int main(){
    int n, i, j, broj_razmaka;
    printf("Unesite broj n");
    scanf("%d", &n);
    //prvi oblik
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("* ");
        }
        printf("\n");
    }
    //drugi oblik
    printf("\n \n \n");
    for(i=1; i<=n;i++){
        if(i==1 || i==n){
            for(j=1; j<=n; j++){
               printf("* "); 
            }
        }
        else{
            for (j=1; j<=n; j++){
                if(j==1 || j==n){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    //treci oblik
    printf("\n \n \n");
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    //cetvrti oblik
    printf("\n \n \n");
    for(i=n; i>0; i--){
        for(j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
    //peti oblik//
    printf("\n \n \n");
    for(i=1; i<=n;i++){
        if(i==1 || i==n){
            for(j=1; j<=i; j++){
               printf("* "); 
            }
        }
        else{
            for (j=1; j<=i; j++){
                if(j==1 || j==i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    //šesti oblik
    printf("\n \n \n");    
    for(i=n; i>=0;i--){
        if(i==1 || i==n){
            for(j=1; j<=i; j++){
               printf("* "); 
            }
        }
        else{
            for (j=1; j<=i; j++){
                if(j==1 || j==i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    //sedmi oblik
    for(i=n; i>=1; i--){
        for(j=0; j<n-i; j++ ){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("* ");  
        }
        printf("\n");
    }
    //osmi oblik
    printf("\n \n \n");
    for(i=1; i<=n; i++){
        for(j=0; j<n-i; j++ ){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("* ");  
        }
        printf("\n");
    }       
    return 0;
}