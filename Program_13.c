/*Program : Read a String and Just print it in the reverse order @ M_S_Vismaya
Completed on:25/07/2025*/

#include <stdio.h>

int main() 
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s",str);
    while (str[length] != '\0') 
	{
        length++;
    }
    printf("Reversed string: ");
    for(i = length - 1; i >= 0; i--) 
	{
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
