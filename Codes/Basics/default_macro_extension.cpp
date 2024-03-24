// C++ program to Demonstrate the sizes of data types
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    cout << "Size of char : "
         << sizeof(char)
         << " byte"
         << endl
         << "char minimum value: " << CHAR_MIN << endl
         << "char maximum value: " << CHAR_MAX << endl
         << "Size of int : " << sizeof(int) << " bytes"
         << endl
         << "char minimum value: " << INT_MIN << endl
         << "char maximum value: " << INT_MAX << endl
         << "Size of short int : " << sizeof(short int)
         << " bytes" << endl
         << "Size of long int : " << sizeof(long int)
         << " bytes" << endl
         << "Size of signed long int : "
         << sizeof(signed long int) << " bytes" << endl
         << "Size of unsigned long int : "
         << sizeof(unsigned long int) << " bytes" << endl
         << "Size of float : " << sizeof(float) << " bytes"
         << endl
         << "Size of double : " << sizeof(double)
         << " bytes" << endl
         << "Size of wchar_t : " << sizeof(wchar_t)
         << " bytes" << endl;

    return 0;
}
