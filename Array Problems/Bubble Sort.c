/**
Bubble Sort
1. Highest Element takes it's position
2. Consecutive elements are compared i.e., a[j] & a[j+1]
**/
#include<stdio.h>
int main()
{
    int n, i, c, j;
    scanf("%d",&n);     //Enter the length of array
    int arr[n]; //declaring an array of length n
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);//Taking input of Array Element
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                c = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
/**
Output:
7
9 6 8 3 4 5 7
3 4 5 6 7 8 9
Process returned 0 (0x0)   execution time : 16.949 s
Press any key to continue.
**/
