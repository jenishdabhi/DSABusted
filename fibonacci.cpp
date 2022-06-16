#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;

    for(int i=0;i<10;i++)
    {
        int sum=a+b;
        cout<< sum << endl;
        
        a=b;
        b=sum;
    }
 return 0;
}