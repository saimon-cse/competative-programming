
/*
    All SLT containers are passed by value
    if any container passed by value then it make a copy in the called function

    ----------------
    Some Methods
    ----------
    at()
    operator()
    front()
    back()
    size()
    max_size()

*/



#include<iostream>
#include<array> // include the SLT array features 
#include<algorithm> // include the most commonly used function like sort etc

using namespace std;

// in the function the array create copy from the main arr, it can't update main array
void updateArr(array<int, 6>arr, int i, int value){
    arr[i] = value;
}

// in this array we use a referance, so it can update the main array
void updateArray(array<int, 6> &a, int i, int value){ // the array name can be anyting, it just like work as nickname
    a[i] = value;
}


// I can use 'const' so the the print funcion can not edit value
void printArray(const array<int, 6> arr){
    for(int i=0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main(){

    array<int, 6> arr = {1, 3, 4, 6, 2, 10};
    arr[0] = 100;

    //try to update array by sending pass by value
    updateArr(arr, 1, 1000);

    // update array using fuction
    updateArray(arr, 3, 40);

/*
    1 2 3 4 5 6
    ^         ^
    |         |
    begin()  end()
*/
    // sort the array
    sort(arr.begin(), arr.end());

    //print array
    printArray(arr);

    // if we want to set all the ellements are same in the array we can use 'fill'
    array<int, 10> zero;
    zero.fill(0);
    
    for(int i; i < zero.size(); i++){
        cout << zero[i] << " ";
    }
    cout << endl;


    // for each loop
    for(auto i : zero){
        cout << i << " ";
    }
    cout << endl;

    //get ith element
    cout << arr.at(2);

    // some others it takes O(1)
    cout << arr.front() << " " << arr.back() << arr.size();


}
