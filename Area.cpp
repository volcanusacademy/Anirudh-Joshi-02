#include <iostream>

using namespace std;

class Shape {  //// base class
  public:
 void calculateArea(){
   
  }
 
};

class Circle : public Shape{   //// drived class
  public:
  void  calculateArea(float r) /// passing float value
 {
   int area;
   area = 3.14*r*r;
   
   int perimeter;
   
   perimeter = 2*3.14*r;
   
   cout<<"\narea of circle is : "<<area;
   cout<<"\nperimeter of circle is : "<<perimeter;
 }
 
};

class Square : public Circle{
  public:
  void calculateArea(int a){
  int area;
   area = a*a;
  int perimeter;
  perimeter = 4*a;
 
   
   cout<<"\nArea of square is : "<<area;
   cout<<"\nPerimeter of circle is : "<<perimeter;
 }
 
};

class tringle : public Square{
  public :
  void calculateArea(int h, int b){
  int area2;
   area2 = 0.5*b*h;
  int perimeter;
 
  perimeter = 2+h+b;  /// p= a+b+c
   
   cout<<"\nArea of tringle is : "<<area2;
   cout<<"\nPerimeterpf tringle is : "<<perimeter;
 }
};
int main()
{
    tringle t;
    Square s;
    Circle c;
   s.calculateArea(12);
   c.calculateArea(87);  ////calling functions
    t.calculateArea(20,54);
   

 return 0;
}