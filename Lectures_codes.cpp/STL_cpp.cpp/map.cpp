#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

    //creation
    unordered_map<string,string> table;

    //insertion 
    table["in"] = "India";
    table.insert(make_pair("en","England"));

    pair<string,string> p;
    p.first = "br";
    p.second = "brazil";
    table.insert(p);

    unordered_map<string,string>::iterator it = table.begin();

    while(it != table.end()){
        pair<string,string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }

//     cout << table.at("in") << endl;
//    // table.at("in") = "india2" ; //can be used to modify the table 

//     //or 
//     table["in"] ="India3";
//     cout << table.at("in") << endl;

    // cout << table.size() << endl;
    // table.clear();
    // cout << table.size() << endl;

    // if(table.empty()==true){
    //     cout << "Table is empty" << endl;
    // } else {
    //     cout << "Table is not empty" << endl;
    // }





    return 0;
}
