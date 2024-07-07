#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw "Division by zero";
        }
        c = a / b;
        cout << c << endl;
    }
    catch (const char *e)
    {
        cout << "Exception: " << e << endl;
    }
    return 0;
}