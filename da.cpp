#include <iostream>
using namespace std;

class Demo
{
    public:
    void display(int x=10 , int y=20)
    {
        cout<<"x"<<x<<endl;
        cout<<"y"<<y<<endl;
    }
};
int main()
{
    Demo d;
    cout<<"Using default arguments:"<<endl;
    d.display();
    cout<<"providing one arguments:"<<endl;
    d.display(50);
    cout<<"providing two arguments:"<<endl;
    d.display(50,60);
    return 0 ;

}