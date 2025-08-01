/*Program : Read n Strings and display them in the ascending order. @ M_S_Vismaya
Completed on:25/07/2025*/

#include <stdio.h>

int main() 
{
    char str[100][100], temp[100];
    int n, i, j, k;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%s", str[i]); 
    }
    for(i = 0; i < n - 1; i++) 
	{
        for(j = i + 1; j < n; j++) 
		{
            for(k = 0; str[i][k] != '\0' && str[j][k] != '\0'; k++) 
			{
                if(str[i][k] > str[j][k]) 
				{
                    for(k = 0; str[i][k] != '\0' || str[j][k] != '\0'; k++) 
					{
                        temp[k] = str[i][k];
                        str[i][k] = str[j][k];
                        str[j][k] = temp[k];
                    }
                } 
				else if(str[i][k] < str[j][k])
				{
                    break;
                }
            }
        }
    }
    printf("\nStrings in ascending order:\n");
    for(i = 0; i < n; i++) 
	{
        printf("%s\n", str[i]);
    }
    return 0;
}
