 /** Binary Search (Array should be sorted in increasing or decreasing order**/
#include<stdio.h>
void BinarySearch(int arr[],int n, int x);
int main()
{
    int t, n, i, x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&x);
        int arr[n];
        printf("Enter the array elements in sorted order:\n");
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        BinarySearch(arr, n, x);
    }
    return 0;
}
void BinarySearch(int arr[],int n, int x)
{
    int first=0, last=(n-1), middle, flag=0;
    while(first<=last)
    {
        middle = (first+last)/2;
        if(x==arr[middle])
        {
            printf("Element %d found at index %d\n",x,middle);
            flag = 1;
            break;
        }
        else if(x>arr[middle])
            first = middle+1;
        else
            last = middle-1;
    }
    if(flag==0)
    printf("Element %d is not found",x);
}


/**
Output:
3
4 5
Enter the array elements in sorted order:
1 2 3 5
Element 5 found at index 3
6 7
Enter the array elements in sorted order:
1 4 5 6 8 9
Element 7 is not found
4 5
Enter the array elements in sorted order:
1 2 5 5
Element 5 found at index 2

Process returned 0 (0x0)   execution time : 69.742 s
Press any key to continue.
**/
