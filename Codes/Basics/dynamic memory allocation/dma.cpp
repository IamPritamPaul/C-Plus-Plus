#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int *p = (int *)malloc(5 * sizeof(int));
    *p = 4;
    *(p + 1) = 5;
    *(p + 2) = 25;
    *(p + 3) = 35;
    *(p + 4) = 45;
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << "\t";
    }
    cout << endl;
    p = (int *)realloc(p, 10 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << "\t";
    }
    cout << endl;
    *(p + 5) = 55;
    *(p + 6) = 65;
    *(p + 7) = 75;
    *(p + 8) = 85;
    *(p + 9) = 95;
    for (int i = 0; i < 10; i++)
    {
        cout << *(p + i) << "\t";
    }
}