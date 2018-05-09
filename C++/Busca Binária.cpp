#include <bits/stdc++.h>

using namespace std;

int check(int i, int X);
int binary_search(vector<int>& V, int X);

int main() {

    int N;
    scanf("%d", &N);
    vector<int> V(N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    sort(V.begin(), V.end());

    int Q;
    scanf("%d", &Q);
    printf("V[%d] = %d\n", lb(V, Q), V[lb(V, Q)]);

    return 0;
}

int check(int i, int X) {
    return i > X;
}

int binary_search(vector<int>& V, int X) {
    
    int l = 0,
        r = V.size() - 1,
        mid;

    while(l <= r) {
        mid = (l + r) / 2;
        if(check(V[mid])) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return mid;
}