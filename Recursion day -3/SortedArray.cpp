#include<iostream>
using namespace std;
bool ispresent(int *arr,int size){
    if(size==0 || size==1){
        return true;
    }
    if (arr[0]>arr[1])
    {
        return false;      /* code */
    }else{
        bool remainingpart=ispresent(arr+1,size-1);
        return remainingpart;
    }

}
int main(){

    int arr[5]={2,4,6,8,10};
    int size=5;

    bool ans=ispresent(arr,size);
    
    ispresent(arr,size);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"array is no sorted"<<endl;
    }
    return 0;
}