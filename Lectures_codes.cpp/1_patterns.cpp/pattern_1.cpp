#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
   //int i=1;
    while(i<=n){
        int j=1; //j bar bar 1 se initialize hoga isiliye upar nitialize nhi hoga
        while(j<=n){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}