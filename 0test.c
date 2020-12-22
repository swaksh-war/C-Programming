#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d value in the array: ",i+1);
        scanf("%d",&a[i]);

    }
    printf("The final array is---\n");
    for(int i=0;i<n;i++)
    {
        printf("%6d",a[i]);
    }
}