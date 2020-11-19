#include <stdio.h>
int main()
{
    int n, m, i, j;
    printf("Enter the size of set A : ");
    scanf("%d", &m);
    int A[m];
    printf("Enter the elements of set A : ");
    for(i=0;i<m;i++)
    scanf("%d",&A[i]);
    printf("Enter the size of set B : ");
    scanf("%d", &n);
    int B[n];
    printf("Enter the elements of set B : ");
    for(i=0;i<n;i++)
    scanf("%d",&B[i]);
    printf("Intersection of set A and B is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i]==B[j])
            printf("%d ",A[i]);
        }
    }
    return 0;
}
