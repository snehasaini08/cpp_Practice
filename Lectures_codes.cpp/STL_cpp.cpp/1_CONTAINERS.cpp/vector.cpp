#include<iostream>
#include<vector>
using namespace std;

int main()
{   //2D array/vector  

    vector<vector<int>> arr(5, vector<int>(4,0));
    int totalRows = arr.size();
    int totalcolumns = arr[0].size();


    vector<vector<int>> brr(4);

    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);

    int totalRowCount = brr.size();
    // int totalcol Count = brr[i].size();









    // vector<int> first;
    // vector<int> second;

    // first.push_back(10);
    // first.push_back(11);
    // first.push_back(12);
    // first.push_back(13);

    // //traersing the vector through the iterator

    // //Create an iterator 
    // vector <int> :: iterator it = first.begin();

    // while(it != first.end()){
    //     cout << *it << " ";
    //     it++;
    // }

    // // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);

    // first.swap(second);

    // cout<< first[0] <<" "<< first[1]<<" " << first[2]<<" " << first[3] << endl;

    // for(int i:first){
    //     cout<< i << " ";
    // }
    
    //  for(int i:second){
    //     cout<< i << " ";
    // }



    //creation
//     vector<int> marks;
//    // marks.reserve(10);
//    //cout<< marks.max_size() << endl;
    
//     marks.push_back(10);
//     marks.push_back(20);
//     marks.push_back(30);
//     marks.push_back(40);
//     marks.push_back(30);
//     marks.push_back(40);

//    // marks.clear();
//     marks.insert(marks.begin(),50);

//     cout << marks.size() << endl;
//     marks.erase(marks.begin(),marks.end());
//     cout<< marks.size() << endl;
//     //cout<< marks [0] << endl;
   
//     cout<< "Size: " << marks.size() << endl;
//     //40 will be removed 
//     marks.pop_back();
//     cout<<"Size "<<marks.size() << endl;
//     cout<<marks.front() << endl;
//     cout<< marks.back() << endl;

//     //Check if the vector is empty
//     if(marks.empty()==true){
//         cout<<"Vector is empty" << endl; }
//     else  {cout << "Vector is not empty" << endl;   
//     }

// vector <int> age(100);
// age[0]=10;

















     


       

//     //cout<< *(marks.begin()) << endl;


//     //vector<int> miles(10);
//     //vector<int> distances(15,0);
 }
