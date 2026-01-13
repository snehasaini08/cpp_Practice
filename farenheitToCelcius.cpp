#include<iostream>
using namespace std;
int main()
{
    float f;
    cout<<"Enter temperature in Fahrenheit: "<<endl;
    cin>>f;
    float c=(f-32)*5/9;
    cout<<"Temperature in Celsius is: "<<c<<endl;
    return 0;
}

