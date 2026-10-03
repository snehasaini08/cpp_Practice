//Program to take input from user, fill in an array and display the same
#include<iostream>
using namespace std;

printArray(int arr[],int size){
    cout<<"Array is : "<<endl;
    for(int i=0;i<size;i++){
        cout << arr[i] <<" ";
    }
}
int main(){
    int arr[10] ;

    int n ;
    cin >> n;

    cout<<"Enter Array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int size = sizeof(arr)/sizeof(int);
    cout<<"Array size: "<<size<<endl;

    printArray(arr,n);

}