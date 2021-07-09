#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int n, m, drop;
    cin >> n >> m;
    drop = ((n / 2) + (n % 2)) * ((m / 2) + (m % 2));
    cout << drop << endl;

    return 0;
}
