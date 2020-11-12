#include <stdio.h>
int main()
{

int a,i,pot=0;
printf("Positive Number");
scanf("%d",&a);
for (i=2;i<=a/2;++i){
    if(a%i==0){
        pot=1;
        break;
    }
}
if (a==1){
printf("\n 1 is neither prime nor composite");
}
else
{
    if(pot==0)
    printf("\n %d the number is a prime number",a);
    else
    printf("\n %d the number is not a prime number",a);
    
}
}