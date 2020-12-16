#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r);

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}// } Driver Code Ends


void merge(int arr[], int l, int m, int r)
{
    int i = l,j = m+1;
    int temp[r-l+1],index=-1;
    while(i<=m && j<=r)
    {
        if(arr[i]>=arr[j])
        {
            temp[++index] = arr[j];
            j++;
        }
    
        if(arr[j]>=arr[i])
        {
            temp[++index] = arr[i];
            i++;
        }
    }
    while(i<=m)
    {
        temp[++index] = arr[i];
        i++;
    }
    while(j<=r)
    {
        temp[++index] = arr[j];
        j++;
    }   
    for(int p = r;p>=l;p--)
    {
        arr[p] = temp[index--];
    }
     
}