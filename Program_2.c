/*Program - Use a menu-driven program to insert, search, delete and sort elements in an array using functions (use global variables) @ M_S_Vismaya
Completed on : 09/07/2025*/

#include <stdio.h>
int a[5],pos=-1;
void insert(int e)
{
    if(pos+1==5)
    {
        printf("Error:Array is full");
    }
    else
    {
        a[++pos]=e;
    }
}
void delete()
{
    if(pos==-1)
    {
        printf("Error:Array is empty");
    }
    else
    {
        printf("\n%d",a[pos--]);
    }
}
void sort()
{
	if(pos==-1)
    {
        printf("Array is empty\n");
        return;
    }
    int i,j,temp;
    for(i = 0;i<pos;i++)
    {
        for(j=i+1;j<=pos;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array sorted successfully.\n");
}
int menu()
{
    int ch;
    printf("\nINSERT-1\nDELETE-2\nDISP ALL-3\nSORT-4\nEXIT-5\nEnter your choice:");
    scanf("%d",&ch);
    return ch;
}
void display()
{
    int i;
    for(i=0;i<=pos;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void processArray()
{
    int ch;
    for(ch=menu();ch!=5;ch=menu())
    {
        switch(ch)
        {
            case 1:
                printf("Enter the value to insert:");
                scanf("%d",&ch);
                insert(ch);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
            	sort();
            	break;
            default:
                printf("Error:Wrong choice");
                break;
        }
    }
}

int main()
{
    processArray();
    return 0;
}  
