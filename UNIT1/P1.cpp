//BASIC STRUCTURE PROGRAM

#include <iostream>
using namespace std;

class Student
{
    private:
    string name;
    int roll_no;
    float marks;

    public:
    void read()
    {
        cout<<"Enter student name"<<endl;
        cin>>name;

        cout<<"Enter roll_no"<<endl;
        cin>>roll_no;

        cout<<"Enter marks"<<endl;
        cin>>marks;
    }
    void display()
    {
        cout<<"Student details are:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Roll_no:"<<roll_no<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main()
{
    Student s;
    s.read();
    s.display();
    return 0;
}