#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    // copy value
    int mainIndexarray = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndexarray++];
    }

    mainIndexarray = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndexarray++];
    }
    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainIndexarray = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndexarray++] = first[index1++];
        }
        else
        {
            arr[mainIndexarray++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainIndexarray] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainIndexarray] = second[index2++];
    }
}
void mergesorte(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    
    int mid = (s + e) / 2;
    // left part array
    mergesorte(arr, s, mid);
    // right part array
    mergesorte(arr, mid + 1, e);

    merge(arr, s, e);
}
int main()
{
    int arr[6] = {2,5,7,6,1,3};
    int n=6;

    mergesorte(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    

    return 0;
}