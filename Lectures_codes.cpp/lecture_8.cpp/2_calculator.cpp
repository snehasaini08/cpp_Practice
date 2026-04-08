#include<iostream>
using namespace std;
int main()
{
    int a , b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;

    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    char op;
    cout<<"Enter  the operation you want to perform: "<<endl;
    cin>>op;

    switch( op ) // can use expression here like 2*a , a/b 
    {
        case '+' : cout << "Sum is : " << (a+b) <<  endl;
        break;

        case '-' : cout << "Sub is : " << (a-b) <<  endl;
        break;

        case '*' : cout << "Mul is : " << (a*b) <<  endl;
        break;

        case '/' : cout << "Div is : " << (a/b) <<  endl;
        break;

        case '%' : cout << "Remainder is : " << (a+b) <<  endl;
        break;

        default : cout <<  "Please Enter the valid operation" << endl;
    }


}