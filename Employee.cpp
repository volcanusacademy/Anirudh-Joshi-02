#include<iostream>
using namespace std;
class Employee
{
    public:
    void Calculatesalary()
    {
        cout<<"\nSalaries is mentioned below : ";
    }
};
class Full_Time_Employee
{
    public:
    void Calculatesalary(int sph,int days)//**sph** is salary given to employee per hour
    {//days is number of days in a month
        cout<<"\nMonthly salary of full time employee  is : "<<sph*8*days;
    }// 8 is the number of hours the employee has to work 
};
class Part_Time_Employee
{
    public:
    void Calculatesalary(int sph,int days)//**sph** is salary given to employee per hour
    {//days is number of days in a month
        cout<<"\nMonthly salary of Part time employee  is : "<<sph*4*days; 
    }// 4is the number of hours the employee has to work
};
class Intern
{
    public:
    void Calculatesalary(int sph,int days)//**sph** is salary given to employee per hour
    {//days is number of days in a month
        cout<<"\nthe monthly salary of Intern is : "<<sph*6*days;
    }// 6 is the number of hours the employee has to work 
};
int main()
{
    Employee e;
    e.Calculatesalary();
    Full_Time_Employee ft;
    ft.Calculatesalary(400,30);
    Part_Time_Employee pt;
    pt.Calculatesalary(400,30);
    Intern i;
    i.Calculatesalary(200,30);
    return 0;
}