#include<iostream>
#include<queue>
using namespace std;
    int main(){

        priority_queue<int,vector<int>,greater<int> > pq;

        pq.push(100); // 100
        pq.push(50); // 50 , 100
        pq.push(75); // 50 75 100
        

        cout << pq.top() << endl;
        pq.pop();//75,100
        cout << pq.top()<< endl;
        pq.pop();




        return 0;
    }

