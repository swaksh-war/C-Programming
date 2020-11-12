#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a[10][10] ;
    int i,j,n;
    printf("Enter the order of the matrix:  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Column %i \n", i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j][i]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("| ");
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("| \n");
    }
}
