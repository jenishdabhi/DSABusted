#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;

    while (start<=end)
    {
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={2,4,6,8,10};

    reverse(arr,5);
    printarray(arr,5);

 return 0;
}