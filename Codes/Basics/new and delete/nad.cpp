#include <iostream>
using namespace std;
int main()
{
    /* int *p = new int;
    *p = 10;
    cout << *p << endl
         << p << endl; */

    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int *ptr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << "\t";
    }
    cout << endl;
    delete ptr;
    return 0;
}