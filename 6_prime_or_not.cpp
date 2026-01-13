#include<iostream>
using namespace std;
int main()
{
    int i=2,n;
    cin>>n;
    while(i<n){
        if(n%i==0){
        cout<<"Not prime"<<endl;
        }
        else{
            cout<<"Prime for "<<i<<endl;
        }
        i=i+1;
    }
    return 0;

    
}
