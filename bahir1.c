/*    24. Napisati program kojim se ispituju sve mogućnosti da pri jednom bacanju kockice zbir brojeva bude dati broj S.
Na primer: Za S=5 rešenja su 1,1,3   1,2,2...
*/
#include <stdio.h>
int  main(){
    int a, b, c, s;
    do{
        scanf("%d",&s);
    }
    while(s>18 || s<3);
    for(a=1; a<=6; a++)
        for(b=1; b<=6; b++)
            for(c=1; c<=6; c++)
                if(a+b+c==s)
                    printf("%d, %d, %d \n", a, b,c );
    return 0;
}