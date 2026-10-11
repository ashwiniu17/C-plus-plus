#include <iostream>
using namespace std;

class Student
{
    private:
     string name;
     int rollno;
     float marks;

    public:
     void read()
     {
        cout<<"Enter student name"<<endl;
        cin>>name;

        cout<<"Enter rollno:"<<endl;
        cin>>rollno;

        cout<<"Enter marks:"<<endl;
        cin>>marks;
     }
     void display()
     {
        cout<<"\nEntered Student Details are"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<rollno<<endl;
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