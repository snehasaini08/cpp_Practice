#include<iostream>
using namespace std;

//function signature (value return karega ni krega , karega toh konsa karega)
//input parameter kya hai
void printCounting(int n) //ham tab use karenge jab hamara function koi value return nahi karega
{
    //function body
    for(int i=1 ; i<=n ; i++)
    {
        cout<< i << " ";
    }
 
}

int main()
{
    int n ;
    cin >> n;
    //function call
    printCounting(n);
    return 0;
}