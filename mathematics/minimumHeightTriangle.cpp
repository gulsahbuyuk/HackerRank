#include <bits/stdc++.h>

using namespace std;

int main() {
    int base;
    int area;
    cin >> base >> area;
    int result;
    result = round(2 * area / base);
    if (base * result / 2 >= area)
        cout << result << endl;
    else
        cout << result + 1 << endl;

    return 0;
}
