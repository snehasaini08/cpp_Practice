#include<iostream>
#include<list>
using namespace std;



int main()
{
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30); //10 20 30

    first.insert(first.begin(),100); //100 10 20 30

    cout << first.size() << endl;
    first.erase(first.begin(),first.end());
    cout << first.size() << endl;

    list<int> :: iterator it2 = first.begin();
    while(it2 != first.end()){
        cout << *it2 << " ";
        it2++;
    }cout << endl;

    // list<int> second;
    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300); // 100 200 300

    //  list<int> :: iterator it2 = first.begin();

    // while(it2 != first.end()){
    //     cout << *it2 << " ";
    //     it2++;
    // }cout << endl;

    // first.swap(second);

    // list<int> :: iterator it3 = first.begin();

    // while(it3 != first.end()){
    //     cout << *it3 << " ";
    //     it3++;
    // }







    //creation
    // list<int> mylist;

    // //insertion
    // mylist.push_back(10); // 10
    // mylist.push_back(20); // 10 20
    // mylist.push_back(30);  // 10 20 30
    // mylist.push_back(40);  // 10 20 30 40

    // mylist.push_front(100); //100 10 20 30 40
    // mylist.pop_back(); //100 10 20 30
    // mylist.pop_front(); //10 20 30

    // mylist.push_back(10); // 10 20 30 10
    // cout << "Before Removng: " << endl;


    // list<int> first;
    // first.push_back(10);
    // first.push_back(10);
    // first.push_back(10);

    // // mylist.remove(10);
    
    // // cout <<  " after removing : " << endl;

    // list<int> :: iterator it2 = mylist.begin();

    // while(it2 != mylist.end()){
    //     cout << *it2 << " ";
    //     it2++;
    // }



    // cout << mylist.front() << endl;
    // cout << mylist.back() << endl;


    // cout << mylist.size() << endl;
    // mylist.clear();
    // cout << mylist.size() << endl;

    // if(mylist.empty()== true){
    //     cout << " List is empty" << endl;

    // }else {
    //     cout << " List is not empty" << endl;
    // }





    return 0;
}