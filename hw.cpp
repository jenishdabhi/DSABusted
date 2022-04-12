#include<iostream>
using namespace std;

int uniquearray(int arr[],int size){

        int ans=0;

        for (int i = 0; i < size; i++)
        {
               ans=ans^arr[i];
        }
        return ans;
}

printarray (int arr[],int size){

        if (ans!=arr)
        {
                cout<<arr[i];
        }
        
}
int main(){

    int arr[7]={2,3,1,6,3,6,2};

    uniquearray(arr,7);
    printarray(arr,7);
}