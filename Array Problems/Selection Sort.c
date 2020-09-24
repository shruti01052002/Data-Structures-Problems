/**
Selection Sort
1. Lowest Element takes it's position first.
2. Here Arr[i] is fixed and Compared with all successive element
3. It takes less time than Bubble Sort to execute.
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
        for(j=i+1;j<(n-i);j++)
        {
            if(arr[i]>arr[j])
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
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
3 4 6 9 8 5 7
Process returned 0 (0x0)   execution time : 2.586 s
Press any key to continue.
**/

