/*3.7. Саставити програм који ће на основу унетих броја поена (од нула до 100) исписати
одговарајућу оцену (0-50 пет, 51-60 шест, 61-70 седам, 71-80 осам, 81-90 девет, 91-100 десет).*/

#include<stdio.h>
int main(){
    int poeni;
    printf("Unesite broj poena:\n");
     scanf("%d",&poeni);
     if(poeni<0&&poeni>100){
         printf("Student je glup\n");
         }
     
     else if(poeni>90){
        printf("Student je dobio ocenu:10\n");
        }
        else if(poeni>80){
            printf("Student je dobio ocenu:8\n");

        }
        else if(poeni>70){
            printf("Student je dobio ocenu:7\n");
        }
        else if(poeni>60){
            printf("Student je dobio ocenu:6\n");

        }
        else
            printf("Student je dobio ocenu 5\n");
            return 0;
        
      

        



}
