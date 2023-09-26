
#include<iostream>
#include<string>
using namespace std;

class Circle
{
    int radius;//private
    public:
    void setradius(int r)
    {
        radius=r;
    }
    int getradius()
    {
        return radius;
    }
};

int main()

{
    Circle c;
    c.setradius(4);

	double n=c.getradius()*3.14*2;

	cout<<"Circumference of the circle="<<n<<endl;
    double t=c.getradius()*c.getradius()*3.14;
    cout<<"Area of the circle="<<t;
    cout<<c.getradius()<<endl;
    return 0;

}