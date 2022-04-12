#include<iostream>
using namespace std;

void reverse(string& str,int i,int j){
    
    
    //base case
    if(i>j)
        return;
    
    swap(str[i],str[j]);
    i++;
    j--;

    //recursive call
    reverse(str,i,j);

}
int main(){

    string name = "Jenish";
    reverse(name,0,name.length()-1);

    cout<<"Reverse is "<<name<<endl;

    return 0;
}