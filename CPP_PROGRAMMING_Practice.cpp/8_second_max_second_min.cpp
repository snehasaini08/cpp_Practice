#include<iostream>
using namespace std;

int secondMax(int arr[],int size){

    //Find maximum element
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        } 
    }

    //Find Second max
    int second_max ;

    // Find first element which is NOT max
    int i = 0;
    while(arr[i] == max) {
        i++;
    }

    second_max = arr[i];

   // Check remaining elements
   for(int i = 0; i < size; i++){
    if(arr[i] == max){
        continue;
    }
    if(second_max < arr[i]){
        second_max = arr[i];
    }
  }
        
    return second_max ;
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

    int second_max = secondMax(arr,n);
    cout << "Second max is : " << second_max << endl;

    return 0;
}