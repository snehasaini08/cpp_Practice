#include<iostream>
#include<vector>
#include<forward_list> 
#include<list>
using namespace std;
int main(){
    //bidirectional iterator

    list <int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    //traverse using iterator

    list<int>:: iterator it = myList.begin();

    while(it != myList.end()){
        //writing
        //(*it) = (*it) + 2;

        //read
        cout<<(*it) << " ";
        //forward move
        it++;
    }


    //backward moving

    // list<int>::iterator it = myList.end();

    // while ( it !=myList.begin() ) {

    //     it--;
    //     cout<< *it << " ";
    //    // it--;
    // }






    return 0;
}