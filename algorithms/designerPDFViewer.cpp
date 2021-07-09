#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> heights(26);
    for (int i = 0; i < 26; i++) {
        cin >> heights[i];
    }
    string h;
    cin >> h;
    int finalheight = 0;
    for (int i = 0; i < h.length(); i++) {
        if (heights[h[i] - 'a'] > finalheight) finalheight = heights[h[i] - 'a'];

    }
    cout << h.length() * finalheight << endl;
    return 0;
}
