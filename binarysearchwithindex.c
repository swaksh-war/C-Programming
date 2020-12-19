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
    int first,last,mid;
    first=0;
    last=n;
    while ( first <= last ) 
    {
        mid = (first+last)/2;
        if ( srch > a[mid] ) 
        {
        first = mid + 1;
        continue;
        }
        if ( srch < a[mid] ) 
        {
        last = mid - 1;
        continue;
        }

        return mid;
    }

  return -1;
}


int binarysearch(int *a[], int n, int srch)
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
    res = binarysearch(&a, n, srch);
    printf("\nThe index of the searched number %d", res);
}