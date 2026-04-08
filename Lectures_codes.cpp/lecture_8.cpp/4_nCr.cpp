#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact *i;
    }
    return fact;
}

int nCr(int n, int r){
    int nume = fact(n);                // nCr = n! / r! * (n-r)!

    int denom = fact(r) * fact(n-r);

    int ans = nume / denom; //or direct return nume/denom

    return ans; 
}
int main()
{
    int n,r;
    cin >> n >> r;
    cout << "answer is " << nCr(n,r) << endl;

}