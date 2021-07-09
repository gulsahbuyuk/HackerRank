#include <iostream>
using namespace std;

int main() {
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    int ap, apcnt = 0, ora, orcnt = 0;
    for (int i = 0; i < m; i++) {
        cin >> ap;
        if (a + ap >= s && a + ap <= t)apcnt++;
    }
    for (int i = 0; i < n; i++) {
        cin >> ora;
        if (b + ora >= s && b + ora <= t)orcnt++;
    }
    cout << apcnt << "\n" << orcnt << endl;



    return 0;
}
