/*
    Deque
    ----
    double-ended queue with square  containers  with dynamic size
    that can expands or contracted with both end(front or back)

*/
/*
        some imports methods  -> (.) refers mostly use
        -------------------
        .[]                 erase()
        .at()               .front()
        .back()             insert()
        begin()             .push_back()
        capacity()          .push_front()
        .clear()            .pop_back()
        empty()             .pop_front()
        end()               resize()
        .size()

*/

#include<iostream>
#include<deque>

using namespace std;

int main(){

    //creat deck
    deque<int>first;         //empty deque of integers
    deque<int>second(4, 100); //four integers with value 100
    deque<int>third(second.begin(), second.end()); //iterating through second
    deque<int>fourth(third); // copy of third

    for(auto i:fourth){
        cout << i << " ";
    }
    cout << endl;   

}