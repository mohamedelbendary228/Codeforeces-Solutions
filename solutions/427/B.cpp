#include<bits/stdc++.h>

using namespace std;


int main() {

    long int n, t, c;

    cin >> n >> t >> c;

    int ways = 0;

    int severity = 0;

    for (int i = 0; i < n; i++) {
        int x;

        cin >> x;

        if (x <= t) {
            severity++;
        }
        else
        {
            severity = 0;
        }

        if (severity >= c) {
            ways++;
        }
    }

    cout << ways << endl;
    
}