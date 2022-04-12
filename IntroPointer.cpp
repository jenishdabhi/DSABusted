#include<iostream>
using namespace std;

int main(){

       

  int num=5;
    cout<<num<<endl;
    cout<<&num<<endl;

int *ptr=&num;
cout<<"address is "<<ptr<<endl;
cout<<"value is "<<*ptr<<endl;

double d=4.5;
double *p2=&d;

cout<<"size of p2 is --> "<<sizeof(p2)<<endl;


int *p=&num;
num++;
cout<<num<<endl;

int *q=p;
cout<<p<<" - "<<q<<endl;
cout<<*p<<" - "<<*q<<endl;

    return 0;
}