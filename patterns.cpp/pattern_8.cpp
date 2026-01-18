/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/
#include<iostream>
using namespace std;
int main()
{
    int i=1,cnt=1;
    int n;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<cnt<<" ";
            cnt++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
