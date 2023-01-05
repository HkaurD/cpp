#include <iostream>
using namespace std;

int psa[100001];
int main(){
    int n, k, ans = 0;
    psa[0] = 0;
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        int temp;
        cin >> temp;
        psa[i] = psa[i - 1] + temp;
    }

    for(int i = k; i <= n; i++){
        ans = max(psa[i] - psa[i - k], ans);
    }

    cout << psa[n] - ans;
}