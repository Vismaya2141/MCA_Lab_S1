#include <stdio.h>

#define size 100

int top = -1;
char a[size];

void push(char x) 
{
    a[++top] = x;
}

char pop() 
{
    if (top == -1)
        return -1;
    else
        return a[top--];
}

int precedence(char c) 
{
    if (c == '(')
        return -1;
    else if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    return 0; 
}

void iftofp(char infix[size], char postfix[size]) 
{
    char temp, x;
    int i = 0, j = 0;

    while (infix[i] != '\0') 
	{
        temp = infix[i];

        if ((temp >= '0' && temp <= '9') || (temp >= 'A' && temp <= 'Z') || (temp >= 'a' && temp <= 'z')) 
		{
            postfix[j++] = temp;
        }
        else if (temp == '(') 
		{
            push(temp);
        }
        else if (temp == ')') 
		{
            while ((x = pop()) != '(') 
			{
                postfix[j++] = x;
            }
        }
        else
		{ // operator
            while (top != -1 && precedence(a[top]) >= precedence(temp)) 
			{
                postfix[j++] = pop();
            }
            push(temp);
        }
        i++;
    }

    while (top != -1) 
	{
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
}

int main() 
{
    char infix[size], postfix[size];

    printf("Enter the infix expression:\n");
    scanf("%s", infix);

    printf("The infix expression is: %s\n", infix);

    iftofp(infix, postfix);

    printf("The postfix expression is: %s\n", postfix);

    return 0;
}
