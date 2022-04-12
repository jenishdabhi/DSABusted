#include<iostream>
using namespace std;
int main(){

    int i=8;
    int p=18;
    int* ptr=&p;
    *ptr=9;

    cout<< i <<" "<< p <<endl;

   
    return 0;
}