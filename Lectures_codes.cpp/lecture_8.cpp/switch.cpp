#include<iostream>
using namespace std;
int main()
{
    //int num=2;
    char ch = 'a';
    switch (ch) {
        case 1: cout << "First" << endl;
               break;

        case 'a': cout << "Second" << endl;
               break ;

        default : cout << "It is default case" << endl;    // it is not mandatory to use this          
    }
    cout<<endl;
    return 0;
}