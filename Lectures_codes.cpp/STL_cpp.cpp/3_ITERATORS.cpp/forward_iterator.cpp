#include<iostream>
#include<vector>
#include<forward_list> // singly lnked list
using namespace std;
int main(){


    //forward iterator
    forward_list<int> list;

    list.push_front(10);
    list.push_front(20);
    list.push_front(30);

    //traverse using iterator

   // forward moving//
    // forward_list<int>::iterator it = list.begin();

    // while(it != list.end()){
    //     (*it) = (*it) + 5;
    //     it++;
    // }

    // it = list.begin();
    // while(it!=list.end()){
    //     cout << *it << " ";
    //     it ++ ;
    // }

    //backward moving
    forward_list<int>:: iterator it = list.end();

    while(it != list.begin()){
        cout << *it << " ";
        --it;
    }



    return 0;

}