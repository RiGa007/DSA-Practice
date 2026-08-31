#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pre-compute
    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // Queries∞
    int q;
    cin >> q;

    while (q--) {
        int number;
        cin >> number;

        cout << mpp[number] << endl;
    }
    cout<<mpp.begin()->second;
    cout<<mpp.rebegin()->second;

    return 0;
}