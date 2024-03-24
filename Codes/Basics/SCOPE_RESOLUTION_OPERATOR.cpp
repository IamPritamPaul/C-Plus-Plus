#include <iostream>
using namespace std;
int x = 23;
int main()
{
    int x = 45;
    cout << x << endl;
    cout << ::x;
}