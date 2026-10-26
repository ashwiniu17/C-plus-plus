//function overloading maxval
 # include <iostream>
 using namespace std;
 int maxval(int a , int b)
 {
    return(a>b)?a:b;
 }
 float maxval(float a , float b)
 {
    return(a>b)?a:b;
 }
 int maxval(int a , int b , int c)
 {
    int max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    return max;
 }
 int main(){
    cout<<"Maximum of 10 and 20 is :"<<maxval(10,20)<<endl;
    cout<<"Maximum of 12.5 and 7.8 is :"<<maxval(12.5f,7.8f)<<endl;
    cout<<"Maximum of 15 25 and 55 is :"<<maxval(15,25,55)<<endl;

    return 0;
 }