/*Program : Reverse a string using Stack @ M_S_Vismaya
Completed on:25/07/2025*/

#include <stdio.h>
#define SIZE 100

char stack[SIZE];
int top = -1;
void push(char ch)
{
    if (top == SIZE - 1) 
	{
        printf("Stack Overflow\n");
    } 
	else 
	{
        stack[++top] = ch;
    }
}
void pop() 
{
    if (top == -1) 
	{
        printf("Stack Underflow\n");
    } 
	else 
	{
        printf("%c", stack[top--]);
    }
}
int main() 
{
    char str[SIZE];
    int i;
    printf("Enter a string: ");
    scanf("%s",str);
    for (i = 0; str[i] != '\0'; i++) 
	{
        push(str[i]);
    }
    printf("Reversed string: ");
    while (top != -1) 
	{
        pop();
    }
    printf("\n");
    return 0;
}

