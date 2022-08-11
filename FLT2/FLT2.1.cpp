#include<iostream>
using namespace std;
class shape
{
  protected:
      float length;
      float height;
  public:
    void showDetails()
    {
         cout<<"Length"<<length<<endl;
         cout<<"Height"<<height<<endl;

    }
     void setData(float lt, float ht)
     {
         length=lt;
         height=ht;
     }
     shape()
     {
         cout<<"Default Constructor Shape."<<endl;
     }
     shape(float lt,float ht)
     {
         length=lt;
         height=ht;
         cout<<"Parameterized Constructor Shape."<<endl;

     }
     ~shape()
     {
         cout<<"Destructor of Shape"<<endl;
     }

};
class triangle : public shape
{
    protected:
      float base;

  public:

     triangle()
     {
         cout<<"Default Constructor Triangle."<<endl;
     }
     triangle(float bs, float x,float y) : shape(x,y)
     {
         base=bs;
         cout<<"Parameterized Constructor Triangle."<<endl;

     }
     float triangleArea()
     {
         return 0.5*base*height;
     }
     ~triangle()
     {
         cout<<"Destructor of triangle"<<endl;
     }
};
class square : public shape
{


  public:

     square()
     {
         cout<<"default Constructor Square."<<endl;
     }
    square( float a,float b) : shape(a,b)
     {

         cout<<"Parameterized Constructor Square."<<endl;

     }
     float squareArea()
     {
         return height*height;
     }
     ~square()
     {
         cout<<"Destructor of square"<<endl;
     }
};


int main()
{
    triangle tr;
    triangle t1(10.5, 5.5 , 16.7);
    cout<<t1.triangleArea()<<endl;
    t1.setData(5.6, 25.8);
    t1.showDetails();


    square s;
    square s1 (33.5,7.9);
    s1.setData(36.7,9.9);
    s1.showDetails();
    cout<<s1.squareArea()<<endl;


}
