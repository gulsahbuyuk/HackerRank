#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, k, count;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int j = 0; j < n - 1; j++) {
        for (int t = j + 1; t < n; t++) {
            if ((arr[j] + arr[t]) % k == 0) {
                count += 1;
            }
        }
    }

    cout << count;
    return 0;
}