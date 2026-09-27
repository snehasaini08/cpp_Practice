#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int a){
    cout << 2*a << " ";
}

bool checkEven(int a){
    return a%2==0;
}

int main(){
    vector<int> arr(6) ;
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 14;
    arr[4] = 15;
    arr[5] = 16;

    //partition

    auto it = partition(arr.begin(),arr.end(),checkEven);
    for(int a:arr){
        cout << a << " ";
    }



    //unique and erase

    // auto it = unique(arr.begin(),arr.end());
    // //it iterator se pehle sare unique element hai
    // //it ke bad sare duplicate elements hai
    // arr.erase(it,arr.end());
    // for(int a:arr){
    //     cout << a << " ";
    // }


    // cout << "Before Shifting : "<< endl;
    // for(int a: arr){
    //     cout << a<< " " ;
    // }
    // cout << endl;

    // //rotate //hw: left rotating

    // rotate(arr.begin(),arr.begin()+3,arr.end());

    // cout << "After roatating : " << endl;
    // for(int a: arr){
    //     cout << a<< " " ;
    // }
    // cout << endl;


   // sort function

    // sort(arr.begin(),arr.end());
    // for(int a: arr){
    //     cout << a<< " " ;
    // }

    // //reverse

    // reverse(arr.begin(),arr.end());
    // for(int a:arr){
    //     cout << a << " " ;
    // }

    //count_if

    // int ans =  count_if(arr.begin(),arr.end(),checkEven);
    // cout << ans << endl;

    //count

    // int target = 11;
    // int ans = count(arr.begin(),arr.end(),target);
    // cout << ans << endl;

    //find_if

    // auto it = find_if(arr.begin(),arr.end(),checkEven);
    // cout << *it << endl;

    //for_each

    //for_each(arr.begin(),arr.end(),printDouble);

    //find

    // int target = 40;
    // //vector<int>::iterator it= find(arr.begin(),arr.end(),target); 
    // //or
    // auto it = find(arr.begin(),arr.end(),target);  
    // cout << *it << endl;
  
}