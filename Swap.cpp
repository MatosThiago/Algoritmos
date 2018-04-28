#include <bits/stdc++.h>

using namespace std;

int main() {

    int V[2] = {1, 2};

    printf("%d %d\n", V[0], V[1]);
    swap(V[0], V[1]);
    printf("%d %d\n", V[0], V[1]);
    swap(V[1], V[0]);
    printf("%d %d\n", V[0], V[1]);

    return 0;
}