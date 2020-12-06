#include <stdio.h>
int main()
{
    int array[100], n, first, last, mid, search, flag = 0;
    printf("enter the number of elements");
    scanf("%d", &n); //n=4
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("enter the element you want to search");
    scanf("%d", &search); //search=4
    /*binary search*/
    first = 0, last = n - 1;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (search == array[mid])
        {
            flag = 1;
            break;
        }
        else if (search < array[mid])
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    if (flag == 0)
    {
        printf("element not found");
    }
    else
    {
        printf("%d value found at %d", search, mid + 1);
    }
}