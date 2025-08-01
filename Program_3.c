/*Program - Use a menu-driven program to insert, search, delete and sort elements in an array using functions (use only local variables) @ M_S_Vismaya
Completed on : 09/07/2025*/

#include <stdio.h>

int insert(int a[], int pos, int e)
{
    if (pos + 1 == 5)
    {
        printf("Error: Array is full\n");
    }
    else
    {
        a[++pos] = e;
    }
    return pos;
}

int delete(int a[], int pos)
{
    if (pos == -1)
    {
        printf("Error: Array is empty\n");
    }
    else
    {
        printf("\nDeleted: %d\n", a[pos]);
        pos--;
    }
    return pos;
}
void sort(int a[],int pos)
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
    printf("\nINSERT - 1\nDELETE - 2\nDISPLAY - 3\nSORT - 4\nEXIT - 5\nEnter your choice: ");
    scanf("%d", &ch);
    return ch;
}

void display(int a[], int pos)
{
    int i;
    for (i = 0; i <= pos; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void processArray()
{
    int a[5];
    int pos = -1;
    int ch, val;

    for (ch = menu(); ch != 5; ch = menu())
    {
        switch (ch)
        {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &val);
                pos = insert(a, pos, val);
                break;
            case 2:
                pos = delete(a, pos);
                break;
            case 3:
                display(a, pos);
                break;
            case 4:
                sort(a, pos);
                break;
            default:
                printf("Error: Wrong choice\n");
        }
    }
}

int main()
{
    processArray();
    return 0;
}
