#include <iostream>
using namespace std;

class Animal
{
    // data member
    //  public, private, protected  (access modiofier)
public:
    int a;
    float b;
    // member function
    void print_data(int a, float b)
    {
        cout << a << "\t" << b << endl;
    }
};

int main()
{
    Animal obj1;
    obj1.a = 10;
    obj1.b = 23.5;
    obj1.print_data(obj1.a, obj1.b);
}