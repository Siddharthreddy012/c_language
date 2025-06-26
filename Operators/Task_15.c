#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int sub;	
	printf("Enter value of A :");
	scanf("%d",&a);
	printf("Enter value of B :");
	scanf("%d",&b);
	printf("Enter value of C :");
	scanf("%d",&c);
	printf("Enter value of D :");
	scanf("%d",&d);
	sub=a-b-c-d;
	printf("Substraction :%d",sub);
	return 0;
}