#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a char: "<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase "<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Uppercase "<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"This is Digit"<<endl;
    }
    return 0;

}