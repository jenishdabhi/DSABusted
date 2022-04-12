#include <iostream>
using namespace std;

void print(int arr[],int size){

    cout<<"Size of array "<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
bool linearSearch(int arr[], int size, int key)
{
    print(arr,size);
    //base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return arr;
    }
    else{

       bool remainingpart = linearSearch(arr + 1, size - 1, key);
       return remainingpart;
    }
}

int main(){

    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    int key = 8;

    bool ans = linearSearch(arr, size, key);

    if(ans)
    {
        cout << "key is present " <<endl;
    }
    else
    {
        cout << "key is not present" <<endl;
    }
    return 0;
}
