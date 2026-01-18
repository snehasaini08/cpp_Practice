#include<iostream>
using namespace std;
//Method-1
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=n;
        while(j>=1) //agar j<=n karenge toh j toh hmesha chota he hoga n se isliye infinite loop me chala jayega
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}

/*Method-2
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/