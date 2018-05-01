#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    scanf("%d", &N);
    vector<int> D;

    for(int i = 1; N > 0; i*=10) {
        D.push_back((N / i) % 10);
        N -= ((N / i) % 10) * i;
    }
    for(int i = D.size() - 1; i >= 0; i--) {
        printf("%d\n", D[i]);
    }

    return 0;
}