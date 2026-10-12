# include <iostream>
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
        cout<<"Enter student name\n";
        cin>>name;

        cout<<"Enter roll no\n";
        cin>>rollno;

        cout<<"Enter marks\n";
        cin>>marks;
      }
      void display()
      {
        cout<<"Student details are :";

        cout<<"Name"<<name<<endl;
        cout<<"RollNo"<<rollno<<endl;
        cout<<"Marks"<<marks<<endl;

      }
};
int main()
{
    Student s;
    s.read();
    s.display();
    return 0;

}