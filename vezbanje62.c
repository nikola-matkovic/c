   /* 1. Učitati vrednost promenljive X. Promenljivu X uvećati za apsolutnu vrednost promenljive
    Y bez korišćenja naredbe fabs (apsolutna vrednost). */

    #include<stdio.h>
    int main(){
        int x,y,s=0;
        printf("Unesite x i y");
        scanf("%d %d",&x,&y);
        for(x=0;x<y;x++)
        if(x<0){
            printf("X nije apsolutna vrednost");
        }
        else{
             s=+x;
            }
            printf("Zbir apsolutnih vrednosti od x je=%d",s); 
            return 0;
       }