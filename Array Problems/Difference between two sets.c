#include<stdio.h>
int main()
{
    int m, n, i, j, a[20], b[20];
    printf("Enter the size of Set A :\n");
    scanf("%d",&m);
    printf("Enter the elements of Set A :\n");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter the size of Set B :\n");
    scanf("%d",&n);
    printf("Enter the elements of Set B :\n");
    int f=0;
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf("%d ",a[i]);
        else
            f=0;
    }
    return 0;
}
