/*Program : Read a String and Reverse the string in the same array itself @ M_S_Vismaya
Completed on:25/07/2025*/

#include <stdio.h>

int main() 
{
    char str[100];
    int i, len = 0, temp;
    printf("Enter a string: ");
    scanf("%s",str);
    for (i = 0; str[i] != '\0'; i++) 
	{
        len++;
    }
    for (i = 0; i < len / 2; i++) 
	{
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
	printf("Reversed string: %s\n", str);
    return 0;
}
