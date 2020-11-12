#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("\n enter first number here");
	scanf("%d",&a);
	printf("\n enter second number here");
	scanf("%d",&b);
	printf("\n enter third number here");
	scanf("%d",&c);
	if(a>=b && a>=c)
	{
	    d=a;
	}
    if(b>=a && b>=c)
	{
	    d=b;
	}

    if(c>=a && c>=b)
	{
	    d=c;
	}

	printf("\n the highest number is %d",d);

	return 0;

}
