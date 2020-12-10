#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    int arr[4] = {a, b, c, d};
    int max = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int m, n, o, p, res;
    printf("Enter the nums: ");
    scanf("%d%d%d%d",&m,&n,&o,&p);
    res = max_of_four(m, n, o, p);
    printf("The greatest value: %d", res);
}