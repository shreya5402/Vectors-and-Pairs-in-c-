// Vector and pairs:-
// Vectors are like dynamic arrays whose size does not have to be specified while declaring it and we can add as many elements as we want to it.

#include<iostream>
#include<vector>
using namespace std;
int main(){

    // Way 1:-
    //initialising the vector

    vector<int> v;
    
    //initialising an array of size n using vector 
    
    vector<int> arr(n);

    // adding elements to the vector

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);

    // printing the vector

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    //Way 2:-
    //using iterator:

    vector<int>::iterator it;
    for(it= v.begin(); it!=v.end(); it++){
        cout<<*it<<endl; // iterator is a pointer therefore *
    }

    //Way 3:-
    //Using the keyword auto //for traversing 
    //auto tells the compiler to auto decide the data type.

    for(auto element:v){ //here element is not an iterator but it signies the values in the vector.
        cout<<element<<endl; 
    } 

    //FUNCTIONS:-
    //PopBack function:-
    //The last element in the vector will get popped or removed.

    v.pop_back();

    //Swap Function
    //Making another vector

    vector<int> v2 (4,10); // here 4 denotes the size and 10 denotes the element or the value stored in each of the 4 size elements.
    //swapping v and v2
    swap(v,v2);
    for(auto element:v){ //here element is not an iterator but it signies the values in the vector.
        cout<<element<<endl; 
    } 
    for( auto element:v2){
        cout<<element<<endl;
    }
    
    ///////////////////////////////////////////
    //Pair is an stl container that allows us to store a pair of values that can be of any type.
    
    //implementing a pair:-
    pair<int,char> p; //here we specify the data types of both the values in the pair
    p.first = 3;
    p.second = 'f';

}
