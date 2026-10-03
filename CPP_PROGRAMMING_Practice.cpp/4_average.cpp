#include<iostream>
using namespace std;

float averageArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        //int sum=0;
        sum=sum+arr[i];
    }
    float average = float(sum)/size;
    return average;
}

void printArray(int arr[],int size){
    cout<<"Array is : "<<endl;
    for(int i=0;i<size;i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
}

void inputArray(int arr[],int size){
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

    float average = averageArray(arr,n);
    cout<<"Average of the given array is : "<<endl;
    cout<<average<<endl;


}