#include <stdio.h>

int fibonacci_recursive(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

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
    printf("The fibonacci series by recursive method of %d index is %d \n", num, fibonacci_recursive(num));
    printf("The fibonacci serues by itersive method of index %d is %d \n", num, fibonacci_itersive(num));
    return 0;
}