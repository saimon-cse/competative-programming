/*
    methods for Vectors
    ----------------
   . []           front()
    at()         insert()
    back()      . pop_back()
    . begin()    .push_back()
    capacity()  .reserve()
  . clear()        resize()
    empty()       .size()
    . end()
    erase()
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    //empty container constractor
    vector<int> first;

    //Fill Constractor (4 integers with value 20)
    vector <int> second(4, 20);

    // Range constractor 
    int number[] = {10, 20, 40, 60};
    vector<int> third (number, number+4);

    // Copy constractor
    vector<int>fourth(third);

    //Another Way
    vector<int> five = {1, 2, 4 , 6};


    vector<int> arr = {1,2,4,5,6,7,8};
    
    //access ith element
    arr.at(3)=7;
    
    // or [] operator
    arr[3]=5;

    // get the current size of the vector
    int n = arr.size();

    // get the underlying capacity
    arr.capacity();

    // get the max size (available due to system or library implementations)
    arr.max_size();

    // push_back() mathod works on O(1), linear if re-alocation happens
        arr.push_back(20);

    // Remove the last elements 
    arr.pop_back();

    //clear all elements from the vector also reduces size to 0
    arr.clear();

    //erase the 4th element
    arr.erase(arr.begin()+3);

    // erase the range , the first 3 elements 
    arr.erase(arr.begin(), arr.begin() + 3);

    vector<int> v;
    for(int i=0; i<10; i++){
        int temp;
        cin >> temp;
        
        v.push_back(temp);
        cout << "Capacity " << v.capacity() << "Size " << v.size() << endl;  
        
    }

    //sort
    sort(v.begin(), v.end());

    // print vector
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    


}