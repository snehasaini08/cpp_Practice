#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    int sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"Sum from 1 to "<<n<<" is "<<sum<<endl;
    return 0;
}