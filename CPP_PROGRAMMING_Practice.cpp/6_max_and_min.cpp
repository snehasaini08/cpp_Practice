#include<iostream>
using namespace std;

int maxElement(int arr[],int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }
    return max;
}

int minElement(int arr[],int size){
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] < min){
            min=arr[i];
        }
    }
    return min;
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

    int min=minElement(arr,n);
    int max=maxElement(arr,n);
    cout<<"Minimum value in array: "<<min<<endl;
    cout<<"Maximum value in array: "<<max<<endl;






}