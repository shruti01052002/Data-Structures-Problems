/** Print the Pair of elements having sum equal to given Sum**/
#include<iostream>
using namespace std;
void PairElements(int arr[],int n,int g_sum);
int main()
{
    int t, n, i, g_sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>g_sum;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        PairElements(arr, n, g_sum);
        cout<<endl;
    }
    return 0;
}
void PairElements(int arr[],int n, int g_sum)
{
    int i, j, sum;
    i = 0;
    j = n-1;
    while(i<j)
    {
        sum = arr[i]+arr[j];
        if(sum<g_sum)
        i++;
        else if(sum>g_sum)
        j--;
        else if(sum==g_sum)
        {
            cout<<arr[i]<<" "<<arr[j]<<" "<<sum<<endl;
            i++;
            j--;
        }
    }
}
