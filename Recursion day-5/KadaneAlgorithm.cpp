#include<iostream>
using namespace std;
int maxarray(int arr[],int n)
{
    int sum=0;
    int maxsum=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<maxsum)
        {
            sum=max(maxsum,sum);
        }
        if(maxsum<0)
        {
            maxsum=0;
        }
        
    }
    return sum;
}

int main()
{
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=maxarray(arr,n);
    cout<<"Maximum subarray is "<<maxi<<endl;

    return 0;
} 