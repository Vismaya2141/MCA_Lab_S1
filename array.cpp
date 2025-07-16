#include<stdio.h>
int a[5],pos=-1;
void insert()
{
	int n;//local variable
	
	int value;
	
	if(pos==-1){
		printf("\nEnter the value:");
		scanf("%d",&value);
		a[0]=value;
		pos++;
	}
	else{
		printf("\n Where do you want to enter the element:\n");
		scanf("%d",&n);
		printf("\nEnter the value:");
		scanf("%d",&value);
		for(int i=pos;i>n;i--){
		int temp;
		a[i+1]=a[i];		
		}
		a[n]=value;
		pos++;	
	}
	
}
void del()
{	
	int n;
	if(pos==-1){
		printf("\nNOthing to delete\n");	
	}
	else{
		printf("\n Position of the element which you want to delete:\n");
		scanf("%d",&n);
		printf("\nThe deleted element is %\n",a[n]);
		for(int i=n;i<pos;i++){
		int temp;
		a[i-1]=a[i];		
		}
		pos--;	
	}
}
void search(int e)
{
	if(pos==-1)
		printf("\n There is no elements in the array\n");
	int flag=0;
	int i=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==e){
			flag==1;
			printf("\nThe element %d is found at the %d th position\n",e,i);
		}
	}
	if(flag==1)
	{
		printf("\nThe element is not found in the array\n");
	}
	
}
void disp(){
	int i=0;
	if(pos==-1){
		printf("\nNOthing to print");
		return;
	}
	printf("The elements are:");
	for(i=0;i<=pos;i++){
		printf("%d \t",a[i]);
	}
}
int menu(){
	int ch;
	printf("\n1.Insert\n2.Delete\n3.Display All\n4.Search element\n5.Stop\nEnter your choice:");
	scanf("%d",&ch);
	return ch;
} 
void process()
{	
	int e;
	int ch;
	for(ch=menu();ch!=5;ch=menu()){
		switch(ch){
			case 1:
					insert();
					break;
			case 2:
					del();
					break;
			case 3:
					disp();
					break;
			case 4:
					printf("\nEnter value you want to search:");
					scanf("%d",&e);
					search(e);
					break;
			
			default:
					printf("\ninvalid choice\n");
					
		}
	}
}
int main(){
	process();
	return 0;
}
