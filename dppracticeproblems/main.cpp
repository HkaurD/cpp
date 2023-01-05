// https://dmoj.ca/problem/dpb
// Educational DP Contest AtCoder B - Frog 2
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int stones[100005];
int dp[100005];

int main() {
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> stones[i];
    }
    memset(dp, -1, sizeof(dp));
    dp[0] = 0; 
    for(int i = 1; i <= n; i++) {
        for (int j = i - 1; j >= i - k && j >= 0; j--) {
            if(dp[i] == -1){
                dp[i] = dp[j] + abs(stones[i] - stones[j]);
            } else {
                dp[i] = min(dp[i], dp[j] + abs(stones[i] - stones[j]));
            }
        }
    }

    cout << dp[n - 1];
    return 0;
}

// https://dmoj.ca/problem/ccc12s5
// CCC '12 S5 - Mouse Journey
