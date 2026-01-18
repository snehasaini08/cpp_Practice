/*A B C D E 
A B C D E
A B C D E
A B C D E
A B C D E*/
#include<iostream>
using namespace std;
/*int main()
{
    int n;
  //  char ch='A';
    cin>>n;
    int i=1;
    while(i<=n)
    {
        char ch='A';
        int j=1;
        while(j<=n)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//with formula
int main()
{
    int i=1;
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n)
        {
           //cout<<'A'+row-1; print integer ASCII value
           //so typecast
           char ch='A'+col-1;
           cout<<ch<<" ";
           col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}