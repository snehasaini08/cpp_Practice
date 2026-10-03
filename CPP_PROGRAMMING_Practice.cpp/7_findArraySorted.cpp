#include<iostream>
using namespace std;

int arraySorted(int arr[],int size){
    bool sorted=true;
    for(int i=0 ; i < size-1 ; i++){
    if(arr[i] > arr[i+1]){
        sorted=false;
        break;
      }
    }
    return sorted;
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

    int sorted = arraySorted(arr,n);
    if(sorted){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not sorted"<< endl;
    }

}