//dynamic memory allocation
#include <iostream>
using namespace std;

int main(){
    int *ptr;
    ptr=new int;
    *ptr=50;
    cout<<"value="<<*ptr<<endl;
    delete ptr;
    ptr = nullptr;
    return 0;

}