#include <iostream>
using namespace std;

class Shape
{
protected:
    float length;
    float height;

public:
    void setData(float lt, float ht)
    {
        length = lt;
        height = ht;
    }
    Shape()
    {
        cout << "Default Constructor Shape." << endl;
    }
    Shape(float lt, float ht)
    {
        length = lt;
        height = ht;
        cout << "Parameterized Constructor Shape." << endl;
    }
    virtual double getheight()
    {
        return height;
    }
    void ShowDetails()
    {
        cout << "Length is" << length;
        cout << "Height is" << height;
    }
    ~Shape()
    {
        cout << "Destructor of shape." << endl;
    }
};

class Rectangle
{
protected:
    float length;
    float height;

public:
    Rectangle()
    {
        cout << "Empty Constructor  Rectangle." << endl;
    }
    Rectangle(float x, float y)
    {
        length = x;
        height = y;
        cout << "Parameterized Constructor Rectangle." << endl;
    }
    float rectanglearea()
    {
        return height * length;
    }
    ~Rectangle()
    {
        cout << "Destructor of rectangle." << endl;
    }
};

class Square : public Shape, public Rectangle
{
public:
    Square()
    {
        cout << "Empty Constructor Square." << endl;
    }
    Square(float a, float b) : Shape(a, b), Rectangle(a, b)
    {
        cout << "Parameterized Constructor  Square." << endl;
    }
    float SquareArea()
    {
        return getheight() * getheight();
    }
    ~Square()
    {
        cout << "Destructor  of Square." << endl;
    }
};

int main()
{
    Square sq;
    Square sq1(10.5, 14.5);
    cout << sq1.SquareArea() << endl;

    sq1.setData(5.5, 9.6);
    sq1.ShowDetails();
    Square sq2(7.3, 3.8);
    cout << sq2.rectanglearea() << endl;
}
