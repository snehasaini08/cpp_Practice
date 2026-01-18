/*A A A A A 
 B B B B B
 C C C C C
 D D D D D 
 E E E E E*/

#include<iostream>
using namespace std;
/*int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n)
        {
           //cout<<'A'+row-1; print integer ASCII value
           //so typecast
           char ch='A'+row-1;
           cout<<ch<<" ";
           col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}*/

//Method-2;
int main()

{
    int n;
    cin>>n;
    int row=1;
     char ch='A';
    while(row<=n){
        int col=1;
        while(col<=n)
        {
           //cout<<'A'+row-1; print integer ASCII value
           //so typecast
           cout<<ch<<" ";
           col=col+1;
        }
        ch=ch+1;
        cout<<endl;
        row=row+1;
    }
}