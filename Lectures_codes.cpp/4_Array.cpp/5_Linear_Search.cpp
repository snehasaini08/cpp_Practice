#include<iostream>
using namespace std;

int search (int arr[], int size, int key) {
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}

int main()
{
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};

    cout <<" Enter the key : "<< endl;
    int key ;
    cin >> key;
    
    int element = search(arr,10,key);
    
    if (element == -1)
    cout<<"Key not found"<<endl;
    else cout <<"Key found" << endl;
    
    return 0;
}
