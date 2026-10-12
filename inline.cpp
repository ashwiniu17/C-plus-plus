#include <iostream>
using namespace std;

inline int square (int n)
{
    return n * n;

}
int main()
{
    int n = 5;
    cout<<"Square="<<square(n);
    return 0;
}