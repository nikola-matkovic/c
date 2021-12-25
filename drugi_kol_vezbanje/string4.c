#include <stdio.h>  
#include <ctype.h>  
int main()  
{  
    int ch, i = 0;  
    char str[150];   
    printf (" Enter the characters from the keyboard (Press Enter button to stop).\n");  
    // use do while loop to define the condition  
    do  
    {  
        ch = getchar(); // takes character, number, etc from the user  
        str[i] = ch; // store the ch into str[i]  
        i++; // increment loop by 1  
    } while (ch != '\n');  // ch is not equal to '\n'  
    printf("Entered characters are %s ", str);   
    return 0;  
}  