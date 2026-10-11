#include <iostream>
using namespace std;
//cube
float volume(float side)
{
    return side * side * side;
}
//cylinder
float volume(float radius, float height)
{
    return 3.14159 * radius * radius * height;
}
//rectangle
float volume(float length, float breadth, float height)
{
    return length * breadth * height;
}

int main()
{
    float side, radius, height;
    float length, breadth;

    cout << "Enter side of cube: ";
    cin >> side;

    cout << "Volume of cube = "<< volume(side) << endl;

    cout << "\nEnter radius and height of cylinder: ";
    cin >> radius >> height;

    cout << "Volume of cylinder = "  << volume(radius, height) << endl;

    cout << "\nEnter length, breadth and height of box: ";
    cin >> length >> breadth >> height;

    cout << "Volume of rectangular box = "<< volume(length, breadth, height) << endl;

    return 0;
}