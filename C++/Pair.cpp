#include <bits/stdc++.h>

using namespace std;

int main() {

    int A, B;
    scanf("%d %d", &A, &B);

    pair<int, int> Pair = make_pair(A, B);
    printf("%d %d", Pair.first, Pair.second);

    return 0;
}