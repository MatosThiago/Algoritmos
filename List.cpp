#include <bits/stdc++.h>

using namespace std;

int main() {

    list<int> L;
    list<int>::iterator it;

    for(int i = 0; i < 10; i++) {
        L.push_front(i);
    }

    it = L.begin();
    L.insert(next(it, 7), 10);

    for(auto i:L) {
        cout << i << "\t";
    }
    cout << endl;

    L.erase(next(it, 7));

    int Size = L.size();

    for(int i = 0; i < Size; i++) {
        cout << L.front() << "\t";
        L.pop_front();
    }
    cout << endl;
    for(int i = 0; i < 10; i++) {
        L.push_front(i);
    }

    list<int> O{11, 11};
    L.merge(O);

    for(auto i:L) {
        cout << i << "\t";
    }
    cout << endl;
    for(auto i:O) {
        cout << i << "\t";
    }
    cout << endl;

    L.clear();
    O.clear();

    return 0;
}