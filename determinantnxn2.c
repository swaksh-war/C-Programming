#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(int a[10][10], int n)
{
    int i,j;
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


int cofactor_of_the_matrix(int b[10][10],int k)
{
    k=n-1;


}

int determinant_value()
{
    int det=0, s=1;
    det = det + s*(a[0][c] * cofactor_of_the_matrix());
    s = -1 * s;
}