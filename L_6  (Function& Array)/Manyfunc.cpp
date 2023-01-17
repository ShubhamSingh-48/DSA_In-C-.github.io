#include <iostream>
using namespace std;
void singh()
{
    cout << "Singh" << endl;
}
void kumar()
{
    cout << "Kumar" << endl;
    singh();
}
void shubham()
{
    cout << "Shubham" << endl;
    kumar();
}
int main()
{
    shubham();
}