#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{

    int arr[10] = {4, 7, 11, 9, -2, 4, 6, 3, 1, 0};

    int key;
    cout << "enter the element that you want" << endl;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }
}