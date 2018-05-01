#include <bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;
    vector<int> D;

    for(int i = 0; i < S.size(); i++) {
        D.push_back(S[i] - '0');
    }
    for(int i = 0; i < D.size(); i++) {
        printf("%d\n", D[i]);
    }

    return 0;
}