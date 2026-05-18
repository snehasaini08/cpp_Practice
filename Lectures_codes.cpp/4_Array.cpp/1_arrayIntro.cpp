#include<iostream>
using namespace std;
int main()
{

    //declare
    int number[15];
    
    //accessing an arry
    cout << "Value at 15 index " << number[6] <<endl;

    //cout << "Value  at 20th index  " << number[20] << endl;
           
   

    //initialising an array 
    int second[3] = {5,7,11};

    //accessing an element
    cout <<" Value at index 2" << second[2] << endl;

    int third[15]= {2,7};
    int n = 15;
    cout << "Printing an array" << endl;
    //print n array
    for(int i=0;i<n;i++)
    {
        cout << third[i] << " ";
    }


    int fourth[10] = {0} ;
    cout << "Printing an array" << endl;
     //print n array
    for(int i=0;i<n;i++)
    {
        cout << third[i] << " ";
    }

    //initialising all location with 1 (not possible with below ine)
    int fifth[10] = {1};
    n=10;
    cout << "Printing the array" << endl;
    //print the array
    for(int i = 0;i<n;i++){
        cout << fifth[i] << " ";
    }

     cout << endl << "Everything is fine" << endl;
    return 0;
}
