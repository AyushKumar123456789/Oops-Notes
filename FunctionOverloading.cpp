#include <bits/stdc++.h>
using namespace std;

class area
{
public:
    virtual void area_cal(int a)
    {
        cout << "Area of square is: " << a * a << endl;
    }
};

class rectangle : public area
{
public:
    void area_cal(int a, int b)
    {
        cout << "Area of rectangle is: " << a * b << endl;
    }
};

int main()
{
    area a;
    rectangle r;
    a.area_cal(5);
    r.area_cal(5, 2); // error Because of function overloading not possible in derived class of base class , in cpp scope resolution is not possible.
    return 0;
}

/*
Overloading doesn’t work for derived class in the C++ programming language.
There is no overload resolution between Base and Derived. The compiler looks into the scope of Derived, finds the single function “double f(double)” and calls it.
It never disturbs the (enclosing) scope of Base.
In C++, there is no overloading across scopes and derived class scopes are not an exception to this general rule
*/

/*
But in Java, the function overriding is possible in the derived class of the base class.
So in Java, overloading works across scopes, contrary to C++.
 The Java compiler determines the correct version of the overloaded method to be executed at compile time based upon the type of arguments used to call the method and
  the parameters of the overloaded methods of both these classes that receive the values of arguments used in call and executes that overloaded method.

*/