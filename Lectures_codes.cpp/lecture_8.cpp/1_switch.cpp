#include<iostream>
using namespace std;
int main()
// {
//     //int num=2;
//     char ch = '1';
//     switch (ch) {
//         case 1: cout << "First" << endl;
//                break;

//         case '1': cout << "Second" << endl;
//                break ;

//         default : cout << "It is default case" << endl;    // it is not mandatory to use this          
//     }
//     cout<<endl;
//     return 0;
// }

//break understanding

/*
{
    
    char ch = '1';
    int num =1;


    switch (num) {
        case 1: cout << "First" << endl;
               //break;

        case '1': cout << "Second" << endl;
               break ;

        default : cout << "It is default case" << endl;    // it is not mandatory to use this          
    }
    cout<<endl;
    return 0;
}

*/

//Nested switch

{
    int num=1;
    char ch = '1';
    switch (ch) {
        case 1: cout << "First" << endl;
               cout << "First again " << endl;
               break;

        case '1': switch(num){
                    case 1: cout <<"Value of num is " << num << endl;
                    break;
                }
                break;
        
        default : cout << "It is default case" << endl;    // it is not mandatory to use this          
    }
    cout<<endl;
    return 0;
}