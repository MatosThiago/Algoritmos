#include <bits/stdc++.h>

using namespace std;

int main() {

    int Vetor[]{5, 3, 1, 4, 7, 2, 6};
    int* P = find(Vetor, Vetor + (sizeof(Vetor) / sizeof(int)), 1);

    if(P < Vetor + (sizeof(Vetor) / sizeof(int))) {
        cout << "Found: " << *P << endl;
    } else {
        cout << "Not Found" << endl;
    }

    vector<int> Vector{5, 3, 1, 4, 7, 2, 6};
    auto vit = find(Vector.begin(), Vector.end(), 6);

    if(vit < Vector.end()) {
        cout << "Found: " << *vit << endl;
    } else {
        cout << "Not Found" << endl;
    }

    map<char, int> Map{{'A', 10},
                       {'B', 33}, 
                       {'C', 25},
                       {'D', 80},
                       {'E', 5}};
    auto mit = Map.find('C');

    if(mit != Map.end()) {
        cout << "Found: " << mit->second << endl;
    } else {
        cout << "Not Fond" << endl;
    }

    string String{"Verify find algorithm"};
    int F = String.find("find");

    if(F < String.size()) {
        cout << "Found: " << F << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}