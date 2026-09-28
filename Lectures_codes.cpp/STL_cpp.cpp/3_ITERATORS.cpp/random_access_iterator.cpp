#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std;
int main(){

   // vector<int> arr = {10,20,30,40,50};
    //or
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);

    //traverse using iterator
    // vector<int>::iterator it=arr.begin();

    // while(it != arr.end()){
    //     //write
    //     *it=*it+7;
    //     //read
    //     cout<< *it << " ";
    //     //forward move
    //     it++;
    // }

    //backward moving 

    // vector<int>::iterator it = arr.end();

    // while(it!= arr.begin()){
    //    // cout<<*it<<" ";
    //     it--; //pehle pich e jauga 
    //     cout<<*it<<" "; //fir print karunga
    // }

    //for random access of values
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    vector<int>::iterator it = arr.begin() + 3;
    cout << *it << endl;














    return 0;
}
