#include <stdio.h>
#include <stdlib.h>

void swaparr(int *p1, int *p2)
{
    int pot;
    pot = *p1;
    *p1 = *p2;
    *p2 = pot;
}

int insearch(int a[], int n, int srch)
{
    int top, bottom, mid;
    bottom = 0;
    top = n - 1;
    mid = (bottom + top) / 2;
    while (top != bottom)
    {
        if (a[mid] == srch)

            return mid;

        else if (a[mid] < srch)

            bottom = mid + 1;

        else

            top = mid - 1;
    }
    return -1;
}

int binarysearch(int a[], int n, int srch)
{
    int i, index;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swaparr(&a[j], &a[j + 1]);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    index = insearch(a, n, srch);
    return index;
}

int main()
{
    int n, srch, res;
    printf("Enter the number of element in the array: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the value of %d here: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n Enter the number you want to search: ");
    scanf("%d", &srch);
    res = binarysearch(a, n, srch);
    printf("\nThe index of the searched number %d", res);
}