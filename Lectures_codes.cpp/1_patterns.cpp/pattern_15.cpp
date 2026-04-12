/*
A 
B B
C C C
D D D D

*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             char ch='A'+row-1;
//             cout<<ch<<" ";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    char ch='A';
    while(i<=n)
    {
        int j=1;
        // char ch='A';
        while(j<=i){
        cout<<ch;
        j++;
        }

    ch++;
    cout<<endl;
    i++;
    }
}
    
