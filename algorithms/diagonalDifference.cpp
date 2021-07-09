#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a[n][n];
    long long diagon1 = 0;
    long long diagon2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            cin >> a[i][j];
            if (i == j)
                diagon1 += a[i][j];

            if (i == n - j - 1)
                diagon2 += a[i][j];

        }
    }

    int tot = abs(diagon1 - diagon2);
    cout << tot << endl;

    return 0;
};
