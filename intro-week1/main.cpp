#include <iostream>; // # for importing
#include <algorithm>;
#include <vector>;
using namespace std;

void greeting(int age, string name){
    cout << "Hello I am " << name << " and I am " << age << "years old";
}

string arr[4]; // cannot add/remove elements; like arrays in Java
int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0); // fast i/0 (input/ouput)
    cout << 1 << endl << 2 << "\n" << 3 << "\n"; //outputs 1,2,3 in that order on different lines

    cout << 4/3 << "\n";
    cout << 4.0/3 << "\n";

    int a = (6 == 2*3) ?  1 : 2; // a is 1 since the statement is true
    cout << a << "\n";

    cout << a++ << "\n"; // adds one after outputting
    cout << ++a << "\n"; // adds one after outputting


    for(int i = 0; i < 11; i++){
        cout << i << " ";
        if(i == 10){
            cout << "\n";
        }
    }

    int j = 5;

    while(j > 0){
        cout << j-- << "\n";
    }

    int l = 16;

    while(l % 2 == 0){
        cout << l << "\n";
        l /= 2;
    }

    arr[2] = "World";
    arr[1] = ", ";
    arr[0] = "Hello";
    arr[3] = "!";

    for(int i = 0; i < 4; i++){
        cout << arr[i] << "\n";
    };

    // need to use include <<bits/stdc++.h>>
    sort(arr+2,arr+6); // sorts, including the start, and excluding the end
    // cannot do arr[-1]

    vector<int> pi;
    pi.push_back(3);
    pi.push_back(1);
    pi.push_back(4);
    for (int i = 0; i < pi.size(); i ++){
        cout << pi[i] << " ";
        if(i == pi.size() - 1){
            cout << "\n";
        }
    }//outputs 3 1 4

    pair<int, string> tuple;
    tuple.first = 2;
    tuple.second = "what";
    cout << tuple.first << " " << tuple.second; //outputs 2 what

    cout << "\n";

    greeting(17, "Harbin");

    return 0; // just means that your program worked
}