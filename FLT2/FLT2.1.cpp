#include <iostream>
using namespace std;
class Shape
{
protected:
    float length;
    float height;

public:
    Shape()
    {
        length = 0;
        height = 0;
        cout << "Shape: Default Constructor." << endl;
    }
    Shape(float lt, float ht)
    {
        length = lt;
        height = ht;
        cout << "Shape: Parameterized Constructor." << endl;
    }
    void showDetails()
    {
        cout << "Length: " << length << " Height: " << height << endl;
    }
    void setData(float lt, float ht)
    {
        length = lt;
        height = ht;
    }

    ~Shape()
    {
        cout << "Shape: Destructor" << endl;
    }
};

class Triangle : public Shape
{

private:
    // Because Triagle will not be inherited by any other class
    float base;

public:
    Triangle()
    {
        cout << "Triangle: Default Constructor." << endl;
    }
    Triangle(float base, float lenght, float height) : Shape(lenght, height)
    {
        this->base = base;
        cout << "Triangle: Parameterized Constructor." << endl;
    }
    float triangleArea()
    {
        return 0.5 * base * height;
    }
    ~Triangle()
    {
        cout << "Triangle: Destructor." << endl;
    }
};

class Square : public Shape
{

public:
    Square()
    {
        cout << "Square: Default Constructor." << endl;
    }
    Square(float height) : Shape(height, height)
    {
        cout << "Square: Parameterized Constructor." << endl;
    }
    float squareArea()
    {
        return height * height;
    }
    ~Square()
    {
        cout << "Square: Destructor" << endl;
    }
};

int main()
{
    Triangle tr;
    // Shape: Default Constructor.
    // Triangle: Default Constructor.
    Triangle t1(10.5, 5.5, 16.7);
    // Shape: Parameterized Constructor.
    // Triangle: Parameterized Constructor.
    t1.showDetails();
    // Length: 5.5 Height: 16.7
    cout << "Triangle: Area: " << t1.triangleArea() << endl;
    // Triangle: Area: 87.675
    t1.setData(5.6, 25.8);
    // 
    t1.showDetails();
    // Length: 5.6 Height: 25.8

    Square s;
    // Shape: Default Constructor.
    // Square: Default Constructor.
    Square s1(33.5);
    // Shape: Parameterized 
    // Square: Para
    s1.showDetails();
    // Length: 33.5 Height: 33.5
    s1.setData(36.7, 9.9);
    //
    s1.showDetails();
    // Length: 36.7 Height: 9.9
    cout << "Square: Area: " << s1.squareArea() << endl;
    //Square: A 9.9*9.

    // Last in first out 
    
}
