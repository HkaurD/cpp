#include <iostream>
using namespace std;

int dp[5280]; // y = dp[x] -> x represents the distance while y represents the min num of strokes to that dist
int clubs[35];
int main() {
    int totdist, numclubs;
    cin >> totdist >> numclubs;

    memset(dp, -1, 5280);

    for(int i = 0; i < numclubs; i++){
        cin >> clubs[i];
    }

    dp[0] = 0; // base case; a dist of 0 requires 0 strokes

    for(int i = 0; i < totdist; i++){
        for(int j = 0; j < numclubs; j++){

        }
    }

    return 0;
}