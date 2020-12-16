/** Linear Search **/
#include<stdio.h>
void LinearSearch(int arr[],int n, int x);
int main()
{
    int t, n, i, x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&x);
        int arr[n];
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        LinearSearch(arr, n, x);
    }
    return 0;
}
void LinearSearch(int arr[],int n, int x)
{
    int i, f=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("Element %d is found at index %d\n",x,i);
            f = 1;
        }
    }
    if(f==0)
    printf("Element %d is not found in the given array\n");
}
/**
Output:
3
4 6
1 2 5 6
Element 6 is found at index 3
5 7
1 2 3 4 5
Element 16 is not found in the given array
7 4
1 3 4 5 6 8 4
Element 4 is found at index 2
Element 4 is found at index 6

Process returned 0 (0x0)   execution time : 69.333 s
Press any key to continue.
**/
