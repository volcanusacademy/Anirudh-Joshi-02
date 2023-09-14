#include<iostream>
using namespace std;

class Calculator
{
    public:
    void Calculateopr()
    {
        cout<<"This program calculates simple oprations of calculator like ('+','-','*','/')";
    }
};
class Addition : public Calculator
{
    public:
    void Calculateopr(int i , int j)
    {
        cout<<"\nThe Addition of two entered value is : "<<i+j;
    }
};
class Substraction : public Calculator
{
    public:
    void Calculateopr(int i , float j)
    {
        cout<<"\nThe Substraction of two entered value is : "<<i-j;
    }
};
class Multiplication : public Calculator
{
    public:
    void Calculateopr(float i , float j)
    {
        cout<<"\nThe Multiplication of two entered value is : "<<i*j;
    }
};
class Division : public Calculator
{
    public:
    void Calculateopr(float i , float j)
    {
        cout<<"\nThe Division of two entered value is : "<<i/j;
    }
};
int main()
{
    Calculator c;
    c.Calculateopr();
    Addition a;
    a.Calculateopr(25,28);
    Substraction s;
    s.Calculateopr(499,228);
    Multiplication m;
    m.Calculateopr(0.5,500);
    Division d;
    d.Calculateopr(1024,2);
    return 0;
}
