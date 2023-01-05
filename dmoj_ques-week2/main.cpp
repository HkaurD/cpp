// The Cosmic Era P2 - Uneven Sand
/*#include <iostream>
using namespace std;
//#define ll long long

int main() {
    long long lo = 1;
    long long high = 2000000000;
    string feedback;

    while(true){
        long long mid = (lo + high) / 2;
        cout << mid << "\n";
        cin >> feedback;
        if(feedback == "OK"){
            return 0;
        } else if(feedback == "SINKS"){ // too low
            lo = mid + 1;
        } else{
            high = mid - 1;
        }
    }
}*/

// DMOPC '16 Contest 2 P4 - Zeros
#include <iostream>
using namespace std;

int main(){
    long long lo = 1, high = 10e9;
    int a, b;
    cin >> a >> b; // the range of trailing zeros

    while(true){
        long long mid = (lo + high) /2;
    }

    return 0;
}