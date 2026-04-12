#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;

    while(row<=n){

        int space=1;
        while(space<row){
            cout<<" ";
            space++;
        }

        int col=row;
        while(col<=n){
            cout<<col;
            col++;
        }

        cout<<endl;
        row=row+1;

    }
}