#include <iostream>
using namespace std; 

void updateArray(int arr[], int i, int n){ // int arr[] is equivalence to int * arr
                                        // the array passed by referance. it does't make any copy
        arr[i] = 100;    
}

void arrySize(int arr[]){
    cout << "Size of Array in function: ";
    cout << sizeof(arr) << endl;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main(){
    
    int arr[] = {1, 23, 4, 5, 7 , 8}; // initi the array 
    int n = sizeof(arr) / sizeof(int); // calculate the array size

    updateArray(arr, 2, n);

    // print base addrace of the array
    cout << arr << endl;

    cout << "size of Array in Main function: ";
    cout << sizeof(arr) << endl;
    arrySize(arr);

    printArray(arr, n);    

}