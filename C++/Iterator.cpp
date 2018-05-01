#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> V = {0, 1, 2, 3, 4, 5, 6, 7};

    for(vector<int>::iterator it = V.begin(); it != V.end(); it++) {
        printf("%d ", *it);
    }
    printf("\n");
    for(auto it = V.begin(); it != V.end(); it++) {
        printf("%d ", *it);
    }
    printf("\n");

    // advance
    auto it = V.begin();
    advance(it, 2);
    printf("%d ", *it);
    advance(it, 3);
    printf("%d\n", *it);

    // next
    it = V.begin();
    printf("%d\n", *next(it, 2));

    // prev
    it = V.end() - 1;
    printf("%d\n", *prev(it, 2));

    return 0;
}