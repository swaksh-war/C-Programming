#include<stdio.h>
#include<stdlib.h>
/// this is coded by swaksh-war and edited and corrected by 
int determinant_of_any_order(int a[10][10], int k)
{
    int det=0,c,s=1,b[10][10],i,j,m,n;
    if (k==1)
        {
            return (a[0][0],1);
        }
        else
        {
            for(c=0;c<=k-1;c++)
            {
                m=0,n=0;
                for(i=0;i<k;i++)
                {
                    b[i][j]=0;
                    for (j=0;j<k && j!= c;j++){ 
                    
                    b[m][n]=a[i][j];
                    if(n<(k-2))
                        n++;
                    else
                    {
                        n=0;
                        m++;
                    }
                    }
                }
                det= det + s*(a[0][c]*determinant_of_any_order(b,k-1));
                s= -1*s;
            }
        }
        return det;
}

int main()
{
    int a[10][10] ;
    int i,j,k,d;
    printf("Enter the order of the matrix:  ");
    scanf("%d",&k);
    for(i=0 ; i<k ; i++)
    {
        printf("Column %i \n", i+1);
        for(j=0 ; j<k ; j++)
        {
            scanf("%d",&a[j][i]);
        }
    }
    printf("\n");
    for(i=0 ; i<k ; i++)
    {
        printf("| ");
        for(j=0 ; j<k ; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("| \n");
    }
    d=determinant_of_any_order(a,k);
    printf("Determinant is : %d \n", d);
    return 0;
}