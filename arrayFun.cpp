#include<iostream>
using namespace std;

void printarray(){}

int main()
{
    //declare array
    int number[15];


    //accesing array
    cout<<"value at  20 index "<<number[20]<<endl;

    cout<<"value at 15 index "<<number[15]<<endl;

    int second[3]={3,7,11};
    cout<<"value at 2 index "<<second[2]<<endl;

    int third[15]={2,7};
    cout<<"printing the array "<<third[15]<<endl;

   int n=15;
    for (int i = 0; i < n; i++)
    {
       cout<<third[i]<<" "<<endl;
    }
    

    cout<<endl<<"everything is fine"<<endl<<endl;

    return 0;

}