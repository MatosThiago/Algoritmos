#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> V{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(auto i = V.begin(); i != V.end(); i++) {
        cout << *i << "\t";
    }
    cout << endl;

    for(auto i:V) {
        cout << i << "\t";
    }
    cout << endl;

    for_each(V.begin(), V.end(), [](int X) {
        cout << X << "\t";
    });
    cout << endl;

    return 0;
}