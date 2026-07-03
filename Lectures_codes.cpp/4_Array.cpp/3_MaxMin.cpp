#include<iostream>
using namespace std;

int getmax( int [], int );
int getmin(int [],int);

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"The maximum value in the array is : "<< getmax(arr,size) <<endl;
    cout<<"The minimum value in the array is : "<< getmin(arr,size) <<endl;
}

int getmax(int arr[],int n)
{
    int max;
    max = arr[0];
    
    for(int i=0;i<n;i++)
    {
        if (arr[i]>=max)
            max=arr[i];
    }
    return max;
}   

int getmin(int arr[],int n)
{
    int min;
    min= arr[0];

    for(int i=0;i<n;i++)
    {
        if (arr[i]<=min)
            min=arr[i];
    }
    return min;
}