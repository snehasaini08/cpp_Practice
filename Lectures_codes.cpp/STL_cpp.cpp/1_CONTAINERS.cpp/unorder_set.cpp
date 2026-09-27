#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){

    //creation
    unordered_set<int>  st;
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);

    if(st.count(15) == 1){
        cout<< "Foound" << endl;
    }else{
        cout << "Not found" ;
    }

    if(st.find(175) != st.end() ) {
        cout << "Found";
    }
    else {
        cout << "Not found" ;
    }

    

    // st.erase(st.begin() , st.end());
    // cout << st.size() << endl;

    // cout << st.size() << endl;
    // st.clear();
    // cout << st.size() << endl;

    // if(st.empty()){
    //     cout << "Set is empty" << endl;
    // }else {
    //     cout << " Set is not empty" << endl;
    // }

    // //traverse
    // unordered_set<int>::iterator it=st.begin();

    // while(it != st.end()) {
    //     cout << *it << " ";
    //     it++;
    // }



return 0;

}