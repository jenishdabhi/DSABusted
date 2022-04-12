#include<iostream>
using namespace std;
void print(int *p){

    cout<< *p << endl;
}
int printSum(int arr[],int n){

    int sum=0;
    for (int i = 0; i < n; i++)
    {
       sum+=arr[i];
    }
    return sum;

}
int main(){
    
    int value=5;
    int *p=&value;

    print(p);
    
    int arr[5]={1,2,3,4,5};

    cout<< "sum is " << printSum(arr,5)<< endl;

    return 0;
    
}