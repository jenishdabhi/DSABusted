#include <iostream>
using namespace std;

char lowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
        }
        else{
             char temp= ch - 'A'+'a';
             return temp;
        }
}

bool checkpalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (lowerCase(a[s]) != lowerCase(a[e]))
        {
            return 0; /* code */
        }
        else
        {
            s++;
            e--;
        } /* code */
    }
    return 1;
}

int reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--; /* code */
    }

    return s;
}

int getlength(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

char getMaxOccuringChar(string s){
    int arr[26]={0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch=s[i];
        int number=0;

        /* code */
        number=ch-'a';
        arr[number]++;        
    }

    int maxi=-1;
    int ans=0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi<arr[i])
        {
            ans=i;
        maxi=arr[i];
        }        
    }

    char finalAns='a'+ans;
    return finalAns;
}  


int main()
{/*

    char name[20];

    cout << "enter the name" << endl;
    cin >> name;

    //cout << "your name is ";
    //cout << name << endl;

   // cout << "length of array is " << getlength(name) << endl;

    int len = getlength(name);
    reverse(name, len);
    cout << "reveres char is " << endl;
    cout << name << endl;

    //cout<<"palindrome or not "<<checkpalindrome(name,len)<<endl;

   // cout<<" check lowerCase character "<<lowerCase('b')<<endl;
    //cout<<" check lowerCase character "<<lowerCase('B')<<endl;
*/

    string s;
    cin>>s;
    cout<<getMaxOccuringChar(s)<<endl;
    
    return 0;
}