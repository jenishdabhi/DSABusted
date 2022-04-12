#include<iostream>
using namespace std;


 int first(int arr[],int n,int key){

     int start=0;
     int end=n-1;
     int mid=start+(end-start)/2;
     int ans=-1;

     while(start<=end){
    

     if(arr[mid]==key){
        ans=mid;
        end=mid-1;
     }
        else if (arr[mid]<key)
        {
           start=mid+1;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
     }
     return ans;
    }

 int last(int arr[],int n,int key){

     int start=0;
     int end=n-1;
     int mid=start+(end-start)/2;
     int ans=-1;

     while(start<=end){
    

     if(arr[mid]==key){
        ans=mid;
        start=mid+1;
     }
        else if (arr[mid]<key)
        {
           start=mid+1;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
     }
     return ans;
    }


    int main(){

        int numfirst[6]={5,7,7,8,8,10};
        cout<<"first element of 8 is at index "<<first(numfirst,6,8)<<endl;

        int numlast[6]={5,7,7,8,8,10};
        cout<<"last element of 8 is at index "<<last(numlast,6,8)<<endl;
        
        

        return 0;
    }