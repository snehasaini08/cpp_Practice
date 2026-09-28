#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);

    //to make heap of vectors (o(n))

    make_heap(arr.begin(),arr.end()); //make_heap = max_heap
    for(int a : arr){
        cout << a << " ";
    }cout << endl;

    arr.push_back(99); // breaks max heap

    // to push again in the same heap ,
    push_heap(arr.begin(),arr.end()); //(o(log(n)))

     for(int a : arr){
        cout << a << " ";
    }cout << endl;

    //deletion in heeap

    pop_heap(arr.begin(),arr.end()); // 99 last me ajyega 
    arr.pop_back(); //vector ki madad se remove karennge 99 ko
    for(int a : arr){
        cout << a << " "; //o1
    }cout << endl;


    //sort heap
    sort_heap(arr.begin(),arr.end()); //on
    for(int a : arr){
        cout << a << " ";
    }cout << endl;



















    return 0;
}