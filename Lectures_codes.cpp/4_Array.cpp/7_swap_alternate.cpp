// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[5]={1,2,3,4,5};
//   int start = 0;
//   int end= start + 1;

//   while(start<5){
//     int temp = arr[start];
//     arr[start]= arr[end];
//     arr[end]=temp;

//     start=start+2;
//     end=start+1;
//   }

//    for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;

// }

#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size);
void printArray(int arr[],int n);

int main(){
  int even[8]={1,2,3,4,5,6,7,8};
  int odd[5]={1,2,3,4,5};

  swapAlternate(even,8);
  printArray(even,8);

  return 0;
}

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}

void swapAlternate(int arr[],int size){

  for(int i=0;i<size;i+=2){
    if(i+1 < size){
      //swap(arr[i],arr[i+1]); //swap internal function
      int temp = arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp;
    }
  }
}

