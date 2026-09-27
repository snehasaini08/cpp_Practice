#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){

    //first.push_back(5);
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    //iota

    vector<int> first(7);
    iota(first.begin(),first.end(),0);

    for(int a:first){
        cout << a << " ";
    }

    //partial sum

     

    // vector<int> first;
    // first.push_back(1);
    // first.push_back(2);
    // first.push_back(3);

    // vector<int> result(first.size());

    // partial_sum(first.begin(),first.end(),result.begin());

    // for(int a: result ){
    //     cout << a << " ";
    // }
    // cout << endl;


    //inner_product

//     vector<int> first;
//     first.push_back(1);
//    first.push_back(2);
//    first.push_back(3);


//     vector<int> second;
//    second.push_back(4);
//    second.push_back(5);
//    second.push_back(6);

    // int ans = inner_product(first.begin(),first.end(),second.begin(),0)
    // cout << ans << endl;

    




    

    //accumulate == calculate the sum of the total vectors values

    // int totalsum = accumulate(arr.begin(),arr.end(),0);
    // cout << totalsum << endl;


















    return 0;
}

