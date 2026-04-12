#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1,cnt=1;//j=1;
    while(i<=n)
    {
        //int cnt=1; //agar yaha cnt=1 karenge toh har row me cnt 1 se start hoga
        int j=1;
        while(j<=n)
        {
            cout<<cnt<<" ";
            cnt++;
            j++;
        }
        cout<<endl;
        i++;
    }
}