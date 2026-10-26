//Default arguments
#include <iostream>
using namespace std;
class Demo
{
    public:
    void display(int x=10,int y=20)
    {
        cout<<"X"<<x<<endl;
        cout<<"Y"<<y<<endl;
    }
};
int main(){
    Demo d;
    cout<<"Using default arguments"<<endl;
    d.display();

    cout<<"Providing one arguments"<<endl;
    d.display(50);

    cout<<"Providing two arguments"<<endl;
    d.display(50,60);
    return 0;
}