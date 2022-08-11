#include<iostream>
using namespace std;

class shape
{
protected:
    float length;
    float height;
public:
    void setData(float lt,float ht)
    {
        length=lt;
        height=ht;
    }
    shape()
    {
        cout<<"Default Constructor Shape."<<endl;
    }
    shape(float lt, float ht)
    {
        length=lt;
        height=ht;
        cout<<"Parameterized Constructor Shape."<<endl;
    }
    virtual double getheight()
    {
        return height;
    }
    void ShowDetails()
    {
        cout<<"Length is"<<length;
	cout<<"Height is"<<height;
    }
    ~shape()
    {
        cout<<"Destructor of shape."<<endl;
    }

};

class rectangle
{
protected:
    float length;
    float height;
public:
    rectangle()
    {
        cout<<"Empty Constructor  Rectangle."<<endl;
    }
    rectangle(float x, float y)
    {
        length=x;
        height=y;
        cout<<"Parameterized Constructor Rectangle."<<endl;
    }
    float rectanglearea()
    {
        return height*length;
    }
    ~rectangle()
    {
        cout<<"Destructor of rectangle."<<endl;
    }

};

class  square : public shape, public rectangle
{
    public:
    square()
    {
        cout<<"Empty Constructor Square."<<endl;
    }
    square(float a, float b) : shape(a,b) , rectangle(a,b)
    {
        cout<<"Parameterized Constructor  Square."<<endl;
    }
    float SquareArea()
    {
        return getheight()*getheight();
    }
    ~square()
    {
        cout<<"Destructor  of Square."<<endl;
    }
};

int main()
{
    square sq;
    square sq1(10.5,14.5);
    cout<<sq1.SquareArea()<<endl;

    sq1.setData(5.5,9.6);
    sq1.ShowDetails();
    square sq2(7.3,3.8);
    cout<<sq2.rectanglearea()<<endl;
}
