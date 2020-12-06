#include<stdio.h>
void y();
int main()
{
int i;
for(i=1;i<=2;i++)
{
y();
}
return 0;
}
void y()
{
auto int a=0;
static int i=0;
a++;
i++;
printf("%d ",a+i);
}  
