// CCC '11 S2 - Multiple Choice

/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int ans = 0;
    vector<char>studentandcorr;

    cin >> n;

    for(int i = 0; i < 2 * n; i++){
        char temp1;
        cin >> temp1;
        studentandcorr.push_back(temp1);
    }

    for(int i = 0; i < n; i++){
        if(studentandcorr[i] == studentandcorr[n + i]){
            ans++;
        }
    }

    cout << ans;

    return 0;
}*/

// CCC '00 S1 - Slot Machines
/*#include <iostream>
using namespace std;

int main(){
    int ans = 0;
    int currmac = 1; // starts from the first machine
    int numq, mac1, mac2, mac3;
    int mac1played = 35, mac2played = 100, mac3played = 10;

    cin >> numq >> mac1 >> mac2 >> mac3;

    while(numq != 0){
        if(currmac == 1) {
            mac1++;
            if (mac1 == mac1played) {
                numq += 30;
                mac1 = 0;
            }
            currmac = 2;
        } else if(currmac == 2) {
            mac2++;
            if (mac2 == mac2played) {
                numq += 60;
                mac2 = 0;
            }
            currmac = 3;
        } else if(currmac == 3) {
            mac3++;
            if (mac3 == mac3played) {
                numq += 9;
                mac3 = 0;
            }
            currmac = 1;
        }
        numq--;
        ans++;
    }

    cout << "Martha plays " + to_string(ans) + " times before going broke.";
}*/

/*#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tides[n];
    int lowtides[n];
    int hightides[n];

    for(int i = 0; i < n; i++){
        int tide;
        cin >> tide;
        tides[i] = tide;
    }

    // to sort in descending, use comp (3rd parameter) greater<>()
    sort(tides, tides + n); // or use sizeof(lowTides) / sizeof(int)

    if(n % 2 == 0){
        for(int i = 0; i < n/2; i++){
            lowtides[i] = tides[i];
            hightides[i] = tides[i + n / 2];
        }

        sort(lowtides, lowtides + n/2, greater<>()); // or use sizeof(lowTides) / sizeof(int)

        for(int j = 0; j < n/2; j++){
            cout << lowtides[j] << " " << hightides[j] << " ";
        }
    } else{
        for(int i = 0; i < n/2; i++){
            lowtides[i] = tides[i];
            hightides[i] = tides[i + n/2 + 1];
        }

        lowtides[n/2] = tides[n/2]; // the one extra low tide

        sort(lowtides, lowtides + n/2 + 1, greater<>()); // or use sizeof(lowTides) / sizeof(int)

        for(int j = 0; j < n/2; j++){
            cout << lowtides[j] << " " << hightides[j] << " ";
        }
        cout << lowtides[n/2]; // the extra low tide is printed at the end
        return 0;


    }
}*/

#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int numSen;
    cin >> numSen;
    vector<int> highfreqread, sechighfreqread; // stores the most freq occurring reading(s)
    int highfreq = 0, sechighfreq = 0;
    unordered_map<int, int> readingFreq; // key = reading, val = freq

    for(int i = 0; i < numSen; i++){
        int reading;
        cin >> reading;

        if(readingFreq.find(reading) == readingFreq.end()){ // if the reading is new and is not already in the map
            readingFreq[reading] = 1; // new key/val -> can also do readingFreq.insert(make_pair(reading, 1));
        } else{ // reading is already in the map
            readingFreq[reading]++; // freq increases
        }
    }

    for(auto read : readingFreq){
        if(read.second >= highfreq){
            highfreqread.push_back(read.first); // keeping track of most often occurring readings
            highfreq = read.second;
        } else if(read.second >= sechighfreq){
            sechighfreqread.push_back(read.first); // keeping track of the second most often occurring readings
            sechighfreq = read.second;
        }
    }

    sort(highfreqread.begin(), highfreqread.end());
    int ans = 0;

    if(highfreq == 1){ // all readings only occur once
        ans = highfreqread[highfreqread.size() - 1] - highfreqread[0]; // biggest - smallest
    } else{
        if(highfreqread.size() == 1){ // only one reading which highest freq
            if(sechighfreqread.size() == 1){ // only one second-highest freq
                ans = abs(highfreqread[0] - sechighfreqread[0]);
            } else{
                for(auto read: sechighfreqread){
                    ans = max(ans, abs(highfreqread[0] - read));
                }
            }
        } else{
            if(sechighfreqread.size() == 1){
                for(auto read: highfreqread){
                    ans = max(ans, abs(sechighfreqread[0] - read));
                }
            } else{ // multiple highest and second-highest freq
                for(auto r1 : highfreqread){
                    for(auto r2 : sechighfreqread){
                        ans = max(ans, abs(r1 - r2));
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}