#include <iostream>
using namespace std;

class complex
{
private:
    int real, imag;

public:
    complex(int r = 0, int i = 0) : real(r), imag(i) {}
    complex operator+(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print()
    {
        cout << real << " + i" << imag << endl;
    }
};

// Here, we have redefined the operator + functionality, So this operator behaves differently under different circumstances or contexts.

int main()
{
    complex c1(10, 5), c2(2, 4);
    complex c3 = c1 + c2;
    c3.print();
}