#include <stdio.h>

//recursive method
int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
    
}

//itersive method
int fibonacci_itersive(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return b;
}

int main()
{
    int num;
    printf("Enter the index number you want: \n");
    scanf("%d", &num);
    printf("The fibonacci series by recursive method of %d index is %d \n", num, fib(num));
    printf("The fibonacci serues by itersive method of index %d is %d \n", num, fibonacci_itersive(num));
    return 0;
}