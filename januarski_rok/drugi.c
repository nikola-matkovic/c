#include <stdio.h>  
#define max 100
int get_anagrm (char arr1[], char arr2[])  
{  
    int num1[20] = {0}, num2[20] = {0}, i = 0;  
    while (arr1[i] != '\0')  
    {  
        num1[arr1[i] -'a']++;  
        i++;  
    }  
      
    i = 0;  
    while (arr2[i] != '\0')  
    {  
        num2[arr2[i] -'a']++;  
        i++;  
    }  
      
    for ( i = 0;i <20; i++)  
    {  
        if ( num1[i] != num2[i])  
            return 0;  
    }  
    return 1;  
}  
int main ()  
{
    char niz1[max], niz2[max];  
    int provera;  
    printf ("Unesite prvu reč: \n ");  
    scanf (" %s", arr1);        
    printf ("Unesite drugu reč \n ");  
    scanf (" %s", arr2);  
    provera = get_anagrm (niz1, niz2);  
    if (provera)  
    {  
        printf ("Reči %s i  %s   su anagrami   \n", niz1, niz2);  
    }  
    else  
    {  
         printf ("Reči %s i  %s   nisu anagrami   \n", niz1, niz2);  
    }  
    return 0;  
}  
  
  

