#include<iostream>
using namespace std;

//1 -> Even
//0 -> Odd

// My method 

/*int isEven(int n){
    if (n%2==0){
        return 1;
    }
    else return 0;
}
int main(){
    int num;
    cin>>num;
    if (isEven(num)){
        cout <<"Number is even " << endl;
    }
    else {cout << "number is odd" << endl;}
}*/

//sir vli using bool

/*bool isEven(int n){
    if (n & 1){
        return 0; //odd
    }
    else return 1; //evn
}

int main()
{
    int num;
    cin>>num;

    if (isEven(num)) {
        cout<< "Number is even " <<endl;
    }
    else cout << "Number is odd" << endl;
}

*/

//Another thing can do
bool isEven(int n){
        return n%2==0;
}

int main()
{
    int num;
    cin>>num;

    if (isEven(num)) {
        cout<< "Number is even " <<endl;
    }
    else cout << "Number is odd" << endl;
}

