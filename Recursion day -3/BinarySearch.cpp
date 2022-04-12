#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int s,int e,int key){
    

    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;

    if (arr[mid]==key)
    {
       return true; /* code */
    }if (arr[mid]<key)
    {
        return BinarySearch(arr,mid+1,e,key);
    }
    if(arr[mid]>key)

        return BinarySearch(arr,s,mid-1,key);
    
}
int main(){

    int arr[5]={2,4,6,8,10};
    int size=5;
    int key=6;

    cout<<"present or not "<<BinarySearch(arr,0,5,key)<<endl;

    return 0;
}