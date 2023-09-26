#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;

    public:
    // Constructor to initialize the student information
    Student(string name, string studentClass, int rollNumber, double marks)
        : name(name), studentClass(studentClass), rollNumber(rollNumber), marks(marks){}

    char calculateGrade() 
    {
        
        if (marks >= 90) {
            return 'A';// capital A for A+
        } else if (marks >= 80) {
            return 'a';// Small a for a
        } else if (marks >= 70) {
            return 'B';// capital B for B+
        } else if (marks >= 60) {
            return 'b';// Small b for b
        } else if(marks >= 50) {
            return 'C';
        } else if(50>marks>=33){
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};
int main() 
{
    
    Student student("Anirudh joshi", "last year", 827191009, 80.5);
    student.displayInfo();
    return 0;
}