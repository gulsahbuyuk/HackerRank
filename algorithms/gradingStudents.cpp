#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n, grade;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> grade;
        if (grade % 5 > 2 && grade >= 38) {
            grade += 5 - (grade % 5);
        }
        cout << grade << endl;
    }


    return 0;
};
