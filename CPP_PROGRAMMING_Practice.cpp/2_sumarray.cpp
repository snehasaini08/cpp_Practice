#include<iostream>
using namespace std;

sumArray(int arr[],int size){
    int sum=0;
    cout<<"Sum of the Array is: "<<endl;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
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
    int sum = sumArray(arr,n);
    cout<<sum<<endl;

    

}