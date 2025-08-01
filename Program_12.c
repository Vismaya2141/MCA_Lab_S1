/*Program : Implement stack operations using arrays @ M_S_Vismaya
Completed on:25/07/2025*/

#include <stdio.h>
#define SIZE 100

int stack[SIZE];
int top = -1;
void push(int value) 
{
    if(top == SIZE - 1) 
	{
        printf("Stack Overflow\n");
    } 
	else 
	{
        top++;
        stack[top] = value;
        printf("Pushed %d onto the stack\n", value);
    }
}
void pop() 
{
    if(top == -1) 
	{
        printf("Stack Underflow\n");
    } 
	else 
	{
        printf("Popped %d from the stack.\n", stack[top]);
        top--;
    }
}
void peek() 
{
    if(top == -1) 
	{
        printf("Stack is empty.\n");
    } 
	else 
	{
        printf("Top element is %d\n", stack[top]);
    }
}
void display() 
{
	int i;
    if(top == -1) 
	{
        printf("Stack is empty.\n");
    } 
	else 
	{
        printf("Stack elements:\n");
        for(i = top; i >= 0; i--) 
		{
            printf("%d\n", stack[i]);
        }
    }
}

int main() 
{
    int ch, value;
    while(1) 
	{
        printf("\n--- Stack Menu ---\n");
        printf("Push - 1\nPop - 2\nPeek - 3\nDisplay - 4\nExit - 5\nEnter your choice: ");
        scanf("%d", &ch);
		switch(ch) 
		{
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;
			case 5:
				return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
