// DMOPC '14 Contest 2 P4 - Deforestation

/*#include <iostream>
using namespace std;

int psa[1000001];
int main() {
    int n;
    psa[0] = 0;
    cin >> n;

    for(int i = 1; i < n + 1; i++){
        int m;
        cin >> m;
        psa[i] = psa[i - 1] + m; // creating the prefix sum array
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b; // inputting the range

        cout << psa[b + 1] - psa[a] << "\n";
    }
    return 0;
}*/

// Back To School '18: Letter Frequency
// I did this question in Java

// DMOPC '16 Contest 2 P4 - Zeros

//#include <iostream>
//using namespace std;
//
//long long getZeros(long long num){
//    // num / 5 + num / 25 + num / 125 + ...
//    long long ans = 0;
//    while(num > 0){
//        ans += num / 5;
//        num /= 5;
//    }
//    return ans;
//}
//
//long long a, b;
//
//int main(){
//    cin >> a >> b;
//    long long first, last; // ans = last - first + 1
//
//    // binary search for first
//    long long lo = 1, hi = 5000000000, mid;
//
//    while(hi > lo){
//        mid = (lo + hi) / 2;
//        if(getZeros(mid) < a){ // this is too small
//            lo = mid + 1;
//        } else{ // mid >= a -> correct ans (=) or too high
//            hi = mid; // mid can be the answer so hi != mid + 1
//        }
//    }
//    first = hi;
//
//    // binary search for last
//    lo = 1, hi = 5000000000;
//
//    while(hi > lo){
//        mid = (lo + hi + 1) / 2; // guaranteeing that when we have two nums [a, b], we search b first
//        if(getZeros(mid) <= b){ // smaller than b or is equal to b
//            lo = mid;
//        } else{ // greater than b -> searching the bottom half of the list
//            hi = mid - 1;
//        }
//    }
//    last = hi;
//
//    cout << last - first + 1;
//
//    return 0;
//}
