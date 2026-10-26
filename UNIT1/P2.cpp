// Function overloading
#include <iostream>
using namespace std;
//cube
float volume(float side){
    return side * side * side ;
}
//cylinder
float volume(float radius,float height){
    return 3.14159 * radius * radius * height;
}
//rectangle
float volume(float breadth,float height,float lenght){
    return lenght * breadth * height;
}
int main(){
    float side , radius,height;
    float breadth,length;

    cout<<"Enter side of cube:"<<endl;
    cin>>side;
    cout<<"Volume of cube:"<<volume(side)<<endl;

    cout<<"Enter radius and height of cylinder"<<endl;
    cin>>radius>>height;
    cout<<"Volume of cylinder:"<<volume(radius,height)<<endl;

    cout<<"Enter length , breadth , height of recatngle"<<endl;
    cin>>length>>breadth>>height;
    cout<<"Volume of rectangle:"<<volume(length,height,breadth)<<endl;

    return 0;

}