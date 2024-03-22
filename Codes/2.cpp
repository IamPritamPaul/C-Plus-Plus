#include <iostream>
using namespace std;
struct abc
{
    int a;
    float b;
};
int main()
{
    struct abc a1;
    a1.a = 10;
    a1.b = 34.5;
    cout << a1.a << "\t" << a1.b;
    return 0;
}