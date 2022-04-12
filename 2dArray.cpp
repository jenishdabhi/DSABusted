#include<iostream>
using namespace std;

bool ispresent( int arr[][3],int target,int i,int j){
        
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
          if (arr[i][j]==target)
          {
              return 1;
          }        
       }
       
    }return 0;  

}
void printsum(int arr[][3],int i,int j){
    cout<<"printing sum"<<endl;

    for (int i = 0; i < 3; i++)
    {
        int sum=0;
       for (int j = 0; j < 3; j++)
       {
           sum+=arr[j][i];
       }
       cout<<sum<<" ";
    }
    cout<<endl;

}
int largestsum(int arr[][3],int i,int j){
    int maxi=INT16_MIN;
    int index=-1;

    for (int i = 0; i < 3; i++)
    {
        int sum=0;
       for (int j = 0; j < 3; j++)
       {
           sum+=arr[j][i];
       }
       if(sum>maxi){
           maxi=sum;
            index=i;
       }
    }

    cout<<"the maximum sum is "<<maxi<<endl;

    return index;
}  
int main(){

    

    int arr[3][3];

    cout<<"enter the element "<<endl;

    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
           cin>>arr[i][j];
       }
       
    }

     for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
       
    }

    cout<<"enter the element to search"<<endl;
    int target;
    cin>>target;
    
    if (ispresent(arr,target,3,3))
    {
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }


    printsum(arr,3,3);

    largestsum(arr,3,3);

}
// uhbuunnii