#include<iostream>
using namespace std;

int getPivot(int arr[],int n){

    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    while (s<e)
    {
      if (arr[mid]>=arr[0])
      {
         s=mid+1;
      }
      else{
          e=mid;
      }
      mid=s+(e-s)/2;
      
    }
  return s;  

}
int main(){

    int arr[5]={8,10,17,1,3};

    cout<<"pivot element is "<<getPivot(arr,5)<<endl;

}

/*

int i=0;
        while(i<s.length())
        {
            if(s[i]==s[i+1])
            {
                s.erase(i,2);
                if(i!=0)
                    i--;
            }
            else
                i++;
        }
      return s;
*/