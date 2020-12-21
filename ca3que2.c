/* Wap to store the marks of 3 students each in group1 and group2, then find the sum of student who got marks as a prime number and display the sum.*/

#include <stdio.h>

int addition(int a[], int n)
{
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        int pot=0;
        for (int j = 2; j <= a[i] / 2; ++j)
        {
            if (a[i] % j == 0)
            {
                pot = 1;
                break;
            }
        }

        if (pot == 0)
        {
            sum += a[i];
        }
    }
    return sum;
}

int main()
{
    int a[3], b[3], n;
    n = 3;
    printf("Enther the g1 students marks---");

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the no. %d studnets marks: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n Enter the g2 students marks---");
    
    for (int j = 0; j < 3; j++)
    {
        printf("\nEnter the no. %d students marks: ", j + 1);
        scanf("%d", &b[j]);
    }
    
    int res1 = addition(a, n);
    int res2 = addition(b, n);
    int final_res = res1 + res2;
    printf("Final answer is: %d", final_res);
    return 0;
}