// DMOPC '18 Contest 2 P4 - Damage Output
#include <iostream>
using namespace std;

long long dmgarr[500005];
int main() {
    int n;
    long long m;
    int onepoint = 1, twopoint = 1;
    cin >> n >> m;

    dmgarr[0] = 0;
    int ans = n + 5;

    for(int i = 1; i <= n; i++){
        int dmg = 0;
        cin >> dmg;
        dmgarr[i] = dmg + dmgarr[i - 1]; // diff array; storing sums from 1 to i in dmgarr[i]
    }

    while(onepoint <= n){
        if(dmgarr[twopoint] - dmgarr[onepoint - 1] >= m){
            if (ans > twopoint - onepoint + 1){
                ans = twopoint - onepoint + 1;
            }
            onepoint++; 
        } else if(twopoint <= n){ // sum is too small
              twopoint++;
        } else{
            break;
        }
    }

    if(ans == n + 5){
        cout << -1;
    } else{
        cout << ans;
    }
    return 0;
}