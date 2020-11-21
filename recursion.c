//factorial using recursion
int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        {
            return(n*factorial(n-1));
        }
    }
    
}

#include<stdio.h>
int main()
{
    int a,result;
    printf("Enter the number here : ");
    scanf("%d",&a);
    result=factorial(a);
    printf("%d",result);

}
