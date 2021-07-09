#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, shake;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        shake = n * (n - 1) / 2;
        cout << shake << endl;


    }

    return 0;
}
