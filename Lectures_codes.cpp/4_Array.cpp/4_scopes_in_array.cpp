#include<iostream>
using namespace std;

int printarr(int arr[],int n);

int main()
{
    int arr[3]={1,2,3};
    
    int print_array = printarr(arr,3);
    cout<<"printing in main function" << endl;
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

int printarr(int arr[], int n)
{
    arr[0]=120;
    cout<<"Printing in function: "<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<endl;
    }
}