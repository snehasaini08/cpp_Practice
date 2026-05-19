#include<iostream>
using namespace std;

//HOLD
void printarray(int arr[],int size){
    cout << "Printing the array" <<endl;
    //print an array
    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;
}

int main()
{
    int second[3] = {5,7,11};
    cout <<" Value at index 2 " << second[2] << endl;

    int third[15]= {2,7};
    int n = 15;
    printarray(third,15);
    int thirdsize = sizeof(third)/sizeof(int);
    cout << "Size of third is " << fifthsize << endl;


    int fourth[10]= {0};
    n = 10;
    printarray(fourth,10);

    int fifth[10] = {1};
    n=10;
    printarray(fifth,10);

    //to find the length of array 
    int fifthsize = sizeof(fifth)/sizeof(int);
    cout << "Size of fifth is " << fifthsize << endl;
}
