#include<iostream>
using namespace std;
class BankAccount{

    private:
    long int accountnumber=344665532;  ////abstractions 

    int balance=25;

    public:
    void deposit(int a)
    {   
        balance+=a; //member funtion
        cout<<"Updated balance after deposit is :"<<balance<<endl;
    }
    void withdraw(int b)
    {
        balance-= b;
        cout<<"Updated balance after withdraw is :"<<balance<<endl;
    }

};

int main()
{
    BankAccount b;
    b.deposit(3000000);  //// object creation for deposit 
    b.withdraw(300);
}