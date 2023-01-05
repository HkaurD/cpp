#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
//    int n;
//    cin >> n;
//    int psa[1005];
//    psa[0] = 0;
//
//    for(int i = 1; i <= n; i++){
//        int temp;
//        cin >> temp;
//        psa[i] = temp + psa[i - 1];
//    }
//
//    int ans = psa[1];
//
//    for(int i = 0; i < n; i++){
//        for(int j = i + 1; j <= n; j++){
//            ans = max(ans, psa[j] - psa[i]);
//        }
//    }
//
//    cout << ans;

    int n; int ans = 0;
    set<int> candies;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp % 2 == 0) {
            candies.insert(temp);
        }
    }

    while(!candies.empty()){
        int curr = *candies.rend();
        cout << curr;
        curr /= 2; ans++;
        if(curr % 2 == 1){
            candies.erase(curr);
        }
    }
    cout << ans;
}