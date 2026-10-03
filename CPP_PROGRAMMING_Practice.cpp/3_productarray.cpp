#include<iostream>
using namespace std;

productArray(int arr[],int size){
    int mul=1;
    cout<<"Product of the array is : "<<endl;
    for(int i=0;i<size;i++){
        mul=mul*arr[i];
        
    }
    return mul;
}

printArray(int arr[],int size){
    cout<<"Array is : "<<endl;
    for(int i=0;i<size;i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
}

inputArray(int arr[],int size){
    cout<<"Enter Array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int main(){

    int arr[10] ;

    int n ;
    cout<<"Give size: "<<endl;
    cin >> n;

    inputArray(arr,n);
    printArray(arr,n);
    int mul=productArray(arr,n);
    cout<<mul<<endl;

}