#include <iostream>
#include <vector>

using namespace std;

/**
 * Find the maximum amount of bread you can eat before the semester ends, given
 * your available swipes.
 *
 * N: the number of days in the semester
 * K: the number of meal cards you have
 * D: the number of days a meal card will be activated for after swiping
 * B: the list of integers denoting the number of bread loaves available
 *    at the cafeteria on each day
 */
int solve(int N, int B, int W, int D, vector<int> H) {
    // k = 1:
    int sumarr[N+1];
    int max=0;
    bool complete;

    sumarr[0] = 0;
    for(int i=0; i<H.size(); i++){
        cout << H[i] << " ";
        sumarr[i+1] = H[i] + sumarr[i];
    }

    //two consec vals that are same means second is 0
    for(int j=1; j<sizeof(sumarr); j++){
        for(int d=0; d<D; d++){
            if(H[j+d] == 0){ //j+d is 0
                complete = false;
                if(sumarr[j+d] - sumarr[j-1]> max){
                    max = sumarr[j+d] - sumarr[j-1];
                }
                break;
            }
            complete = true;
        }
        if(complete && sumarr[j+D] - sumarr[j-1] > max){
            max = sumarr[j+D] - sumarr[j-1];
        }
    }

    return max;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, B, W, D;
        cin >> N >> B >> W >> D;

        vector<int> H(N);
        for (int &height: H) {
            cin >> height;
        }

        cout << solve(N, B, W, D, H) << '\n';
    }
    return 0;
}