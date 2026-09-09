#include<iostream>
using namespace std;

void arrayinput(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int arraysum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    //cout<<"Sum is : "<<sum<<endl;
    return sum;
}

int main()
{
    int size;
    cout<<"Size of array is : "<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter array elements: "<<endl;

    arrayinput(arr,size);
    int sum=arraysum(arr,size);
    cout << "Sum is : "<<sum<<endl;
    return 0;

}