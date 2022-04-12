#include<iostream>
using namespace std;

int printsum(int arr[],int n){
    if (n==0)
    {
       return 0;
    }
    if(n==1){
        return arr[0];
    }
    int sum=printsum(arr+1,n-1);
    int ans=arr[0]+sum;
    
    return ans;
}
int main(){
    int arr[5]={3,2,5,1,6};
    int size=5;

    int sum=printsum(arr,size);
    cout<<"sum is "<<sum<<endl;

    return 0;
}