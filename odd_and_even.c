#include <stdio.h>
int main()
{
	int a;
	printf("\n Enter Your Number Here:");
	scanf("%d",&a);
	if (a%2==0 && a>0)
	printf("\n The Number is even");
	if (a%2!=0 && a<0)
	printf("\n The Number is invalid");
	if (a%2!=0 && a>0)
	printf("\n Number is odd");
	if (a%2==0 && a<0)
	printf("\n Number is invalid");
	if (a==0)
	printf("\n zero is neither odd nor even");
	return 0;
}
