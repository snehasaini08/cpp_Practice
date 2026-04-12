// A
// BC
// DEF
// GHIJ

#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    char ch='A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}