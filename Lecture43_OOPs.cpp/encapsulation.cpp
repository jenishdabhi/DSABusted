#include <iostream>
using namespace std;

class student
{

private:
    string name;
    int age;
    int hight;

public:
    int getage()
    {
        return this->age;
    }
};
int main()
{

    student first;
    cout << "sab thik he" << endl;

    return 0;
}