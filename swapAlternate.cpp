#include <iostream>
using namespace std;

void printarray(int arr[],int n){

   for (int i = 0; i < n; i++)
   {
       cout<<arr[i];
   }cout<<endl;
   
    
}

void swapAlternate(int arr[],int size){

    for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}


int main(){

    int arr[6]={0,1,2,3,4,5};

    swapAlternate(arr,6);

    printarray(arr,6);

}