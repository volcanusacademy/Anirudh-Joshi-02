#include<iostream>
using namespace std;

class Animal
{
    public:
    void makesound()
    {
        cout<<"Animal class";

    }
};
class Cat : public Animal
{
    public:
    void makesound()
    {
        cout<<"\nMEOW MEOW";
    }
};
class Dog : public Animal
{
    public:
    void makesound()
    {
        cout<<"\nWOAF WOAF";
    }
};
class Bird : public Animal
{
    public:
    void makesound()
    {
        cout<<"\nCHUCHU";
    }
};

int main()
{  
    Animal a;
    a.makesound();
    Cat c;
    c.makesound();
    Dog d;
    d.makesound();
    Bird b;
    b.makesound();
    return 0;
}