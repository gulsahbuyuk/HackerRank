#include <iostream>

using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= 100; i++) {
        bool div = true, diver = true;
        for (int j = 0; j < n; j++) {
            if (i % a[j] != 0) {
                div = false;
                break;
            }
        }
        for (int j = 0; j < m; j++) {
            if (b[j] % i != 0) {
                diver = false;
                break;
            }
        }
        if (div && diver) {
            count += 1;
        }
    }


    cout << count;
    return 0;
}