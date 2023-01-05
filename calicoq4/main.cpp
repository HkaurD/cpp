#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Output the minimum total wait time on the first line.
 * Output the optimal new permutation on the second line.
 *
 * N: the number of students in line
 * C: the list of the bottle capacities, in liters, for each student
 */
void solve (int N, vector<int> C) {
    // YOUR CODE HERE
    int waittime = 0;
    int psa[N + 1]; psa[0] = 0;
    string copy = "";
    for(int i = 0; i < N; i++){
        copy += to_string(C[i]);
    }
    cout << copy << " ";

    sort(C.begin(), C.end());
    for(int i = 0; i < C.size(); i++){
        psa[i + 1] = psa[i] + C.at(i);
        waittime += psa[i + 1];
    }

    cout << waittime << "\n";

    for(int i = 0; i < C.size(); i++){
        for(int j = 0; j < copy.length(); j++){
            if(C[i] == copy[j]){

            }
        }
    }
}

int main () {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        vector<int> C(N);
        for (int &C_i: C) cin >> C_i;
        solve(N, C);
    }
}