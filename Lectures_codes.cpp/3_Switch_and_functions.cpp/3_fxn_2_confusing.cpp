#include<iostream>
using namespace std;
//1. zaruri ni h 
int power(int num1,int num2){ //1.yha num1 and num2 ki jagah a,b he ho kuch bi ho skta h

     //cout << a << endl ;   //2. ham dusre block ki value dusre block me acces nhi kr skte
    int ans = 1;

    for(int i=1; i<=num2 ;i++){
        ans = ans * num1;
    }
    return ans;
}

int main(){
    int a,b;
    cin>> a>> b;

    int answer = power(a,b);
    cout<<"answer is : " << answer << endl;

    int c,d;
    cout << c << d;
    answer = power(c,d);
    cout<<"answer is : " << answer << endl;
}
