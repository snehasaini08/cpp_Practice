#include<iostream>
using namespace std;

int SearchElement(int arr[],int size,int key){
bool found = false;

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"Element present at "<< i <<"index"<< endl; 
            found = true;
            break; 
        }   
   }
   if(found == false){
    cout << "Element not present "<< endl;
   }
   
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

    int key;
    cout <<"Enter key to search in an array: " << endl;
    cin >> key;

    SearchElement(arr,n,key);





}