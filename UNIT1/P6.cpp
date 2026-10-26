//inline function sum of 2 numbers
# include <iostream>
using namespace std;

inline int sum(int a , int b){
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter A:"<<endl;
    cin>>a;

    cout<<"Enter B:"<<endl;
    cin>>b;
    
    cout<<"Sum="<<sum(a,b)<<endl;
    return 0;
}