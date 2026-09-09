#include<iostream>
using namespace std;

void arrayReverse(int [],int n);

int main()
{
    int size;
    cout<<"Array  size is: "<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Original array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    
    cout<<endl;
    arrayReverse(arr,size);

    cout<<"Reversed array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }


}

void arrayReverse(int arr[],int n){
    int temp=0;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;  
    }

}