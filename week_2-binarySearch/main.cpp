#include <iostream>
#include <set>

using namespace std;

/*int main() {
    bool found = false;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int lo = 1, hi = 16;//the area of the list we're searching
    int a = 3;
    while (lo <= hi){
        //O(logN)
        int mid = (lo + hi) / 2; //get the middle index
        if (arr[mid] == a){//if we found the value
            found = true;
        }
        else if (arr[mid] > a){//if our middle value is too high
            hi = mid - 1;
            //update which part of the list we're searching
        }
        else if (arr[mid] < a){//if the middle value is too low
            lo = mid + 1;
            //update which part of the list we're searching
        }
    }
    cout << found;
    return 0;
}*/

/*
- an iterator is an object that points to an element inside a container. DO NOT TREAT IT AS THE ELEMENT ITSELF. It will not work.
Instead, we dereference it; to do this, simply put a asterix (*) before the iterator.
- to travel forward and backward in an array, simply use the ++ or the - -.
- a set stores only unique elements in a specific order, which is defaulted to least -> greatest

 set<type> varname; //init
.size() //size of set
.empty() //returns if the set is empty
.begin() //iterator to first element
.end() //iterator to spot AFTER last element (dont dereference it)
.erase(iterator) //erases element that the iterator points to
 set<type>::iterator varname;

 BINARY SEARCH
.lower_bound(value) //returns iterator to first element >= value
.upper_bound(value) //returns iterator to first element > value
.find(value) //returns iterator to that value, or returns the .end() if value not found
 */

// CCC '15 S3 - Gates https://dmoj.ca/problem/ccc15s3
int g, p; // num gates, num plates
int plane;
set<int> gates;

int main(){
    cin >> g >> p;
    for(int i = 1; i <= g; i++){
        gates.insert(i); // the number of gates which are available
    }

    set<int>::iterator it;
    for(int i = 0; i < p; i++){
        cin >> plane; // the incoming plane
        it = gates.upper_bound(plane); // binary searching
        if(it == gates.begin()){ // no plane to the left; can't land
            cout << i; // num of planes that could land
            return 0; // code is done
        }

        it--; // since upper-bound is one larger than the desired gate (value)
        gates.erase(it); // gate is no longer available
    }

    return 0;
}