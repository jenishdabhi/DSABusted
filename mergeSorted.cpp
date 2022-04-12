#include<iostream>
using namespace std;

void merge(int arr1[],int m,int arr2[],int n,int arr3[]){

   int i=0;
   int j=0;int k=0;

    while (i<m && j<n)
    {
        if(arr1[i]< arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
                arr3[k]=arr2[j];
                k++;
                j++;
        }
    }

    while(i<m)
    {
       arr3[k]=arr1[i];
       k++;
       i++;
    }

     while(j<n)
    {
       arr2[k]=arr2[j];
       k++;
       j++;
    }
 }  

 void printarray(int ans[],int n){

    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<"";
    }cout<<endl;
    
 } 

int main(){

    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    int arr3[8]={0};

    merge(arr1,5,arr2,3,arr3);

    printarray(arr3,8);


    return 0;
}