/*Program - demonstrate the use of storage classes (local variable, global variable, static variable, register variable) @ M_S_Vismaya
Completed on : 09/07/2025*/

#include<stdio.h>
int a=10,b;//global variable
void disp()
{
	static int i=10;//static variable
	printf("%d\n",i++);
}
void show()
{
	register int j=100;//register variable
	printf("%d\n",j++);
}
int main()
{
	int b;//local variable
	printf("%d %d\n",a,b);
	disp();
	disp();
	disp();
	show();
	show();
	return 0;
}
