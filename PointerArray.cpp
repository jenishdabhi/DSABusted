#include<iostream>
using namespace std;
int main(){

     int arr[10]={23,122,41,67};
        cout<<"Address of memory block is "<<arr<<endl;
        cout<<arr[1]<<endl;
        cout<<"Address of memory block is "<<&arr[0]<<endl;

        cout<<" *arr is "<<*arr<<endl;
        cout<<"*(arr+1) "<<*(arr+1)<<endl;
        cout<<" *(arr)+1 is "<<*(arr)+1<<endl;
        cout<<" *(arr)+2 is "<<*(arr)+2<<endl;
        cout<<" *(arr)+1 is "<<*(arr+2)<<endl;
        cout<<" *(arr)+2 is "<<*(arr+2)+2<<endl;
        cout<<&arr<<endl;

       int temp[10];
        cout<<sizeof(temp)<<endl;

        int *ptr=&temp[0];
        cout<<sizeof(ptr)<<endl;


    return 0;
}