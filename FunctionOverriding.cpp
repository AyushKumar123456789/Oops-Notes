#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal Sound" << endl;
    }
    void eat()
    {
        cout << "Animal Eat" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog Sound" << endl;
    }
};

int main()
{
    Animal *a;
    Dog d;
    a = &d;
    a->sound();
    a->eat();
    return 0;
}

/*
So, without the virtual keyword, the function is called on the bases of the pointer type, not on the bases of the object it pointed to which is called early binding or static binding.
But with the virtual keyword, the function is called on the bases of the object it pointed to, which is called late binding or dynamic binding.
*/