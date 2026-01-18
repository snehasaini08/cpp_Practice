/*1
21
321
4321
54321*/

#include<iostream>

using namespace std;
/*int main()
{
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=i; //col=row
        while(j>=1)
        {
            cout<<j<<" ";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}*/

//sir vai method

int main()
{
int n;
cin>>n;
int i=1;
while(i<=n)
{
    int j=1;
    while(j<=i)
    {
        cout<<i-j+1<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

}
