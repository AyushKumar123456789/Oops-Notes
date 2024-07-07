#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
    void display()
    {
        cout << "Shape::display()" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Circle::draw()" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Rectangle::draw()" << endl;
    }
};

int main()
{
    // Shape sh; // Error: cannot instantiate abstract class
    Shape *shape;
    shape->display(); // But can create pointer of abstract class and call its member function which is not pure virtual
    Circle circle;
    Rectangle rectangle;
    circle.draw();
    rectangle.draw();
    return 0;
}