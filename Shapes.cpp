#include<iostream>
using namespace std;

class Shapes
{
    public:
    void CalculateArea()
    {
        cout<<"THE area of following shapes are :"<<endl;
    }
};
class Circle : public Shapes
{
    public:
    void CalculateArea(float r)
    {
        cout<<"The area  of circle : "<<3.14*r*r;
    }
};
class Square : public Shapes
{
    public:
    void CalculateArea(int s)
    {
        cout<<"\nThe area  of Square is : "<<s*s;
    }
};
class Triangle : public Shapes
{
    public:
    void CalculateArea(int b,int h)
    {
        cout<<"\nThe area  of Triangle is : "<<0.5*b*h;
    }
};
class Rectangle : public Shapes
{
    public:
    void CalculateArea(int l,int b)
    {
        cout<<"\nThe area  of Rectangle is  : "<<l*b;
    }
};

int main()
{  
    Shapes s;
    s.CalculateArea();
    Circle c;
    c.CalculateArea(4.5f);
    Square Sq;
    Sq.CalculateArea(8);
    Triangle t;
    t.CalculateArea(4,8);
    Rectangle r;
    r.CalculateArea(15,3);
    
    return 0;
}