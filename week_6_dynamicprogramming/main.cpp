// CCC '07 J5 - Keep on Truckin'
#include <iostream>
#include <vector>

using namespace std;

vector<int> motels = {0,990,1010,1970,2030,2940,3060,3930,4060,4970,5030,5990,6010,7000};
long long dp[40];
int a, b, n;

int main() {
    cin >> a >> b >> n;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        motels.push_back(temp);
    }

    sort(motels.begin(), motels.end());


    dp[0] = 1; // base case

    for(int i = 1; i < n + 14; i++){
        long long num = 0;

        for(int prev = i - 1; prev >= 0; prev--){
            if (motels[i] - motels[prev] >= a && motels[i] - motels[prev] <= b){
                num += dp[prev];
            }
        }
        dp[i] = num;
    }

    cout << dp[n + 13] << "\n";

    return 0;
}