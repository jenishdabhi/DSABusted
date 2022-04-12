#include <iostream>
using namespace std;

int first_occurance(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}
int last_occurance(int arr[] , int n, int key)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{

   int nums[6] = {5, 7, 7, 8, 8, 10};

    cout << "enter the firt occurrence " <<first_occurance(nums, 6, 8)<< endl;

    cout << "enter the last occurrence " <<last_occurance(nums, 6, 8)<< endl;

    

    return 0;
        
  
        
}