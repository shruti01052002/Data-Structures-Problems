/** Matrix Multiplication **/
#include<stdio.h>
int main()
{
    int i, j, k, m, n, p, q;
    printf("Enter the dimension of matrix A");
    scanf("%d %d",&m,&n);
    int arrA[m][n];
    printf("Enter the elements of matrix A");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d ",&arrA[i][j]);
        }
    }
    printf("Enter the dimension of matrix B");
    scanf("%d %d",&p,q);
    int arrB[p][q];
    printf("Enter the elements of matrix B");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d ",&arrB[i][j]);
        }
    }
    int arrC[m][q];
    if(n==p)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                arrC[i][j] = 0;
                for(k=0;k<n;k++)
                arrC[i][j] = arrC[i][j]+(arrA[i][k]*arrA[k][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            printf("%d ",arrC[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("Matrix Multiplication is not possible");
    }
    return 0;
}
