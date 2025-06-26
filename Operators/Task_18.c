#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;	
	float Div;
	printf("Enter the value of A is :");
	scanf("%d",&a);
	printf("Enter the value of B is :");
	scanf("%d",&b);
	printf("Enter the value of C is :");
	scanf("%d",&c);
	printf("Enter the value of D is :");
	scanf("%d",&d);
	Div=(a/b)/(c/d);
	printf("Division :%f",Div);
	return 0;
}