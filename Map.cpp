#include <bits/stdc++.h>

using namespace std;

int main() {

    map<int, string> M;

    M[0] = "Zero";
    M[1] = "Um";
    M[2] = "Dois";
    M.insert(pair<int, string> (3, "Tres"));
    M.insert(pair<int, string> (4, "Quatro"));
    M.insert(pair<int, string> (5, "Cinco"));
    
    for(int i = 0; i < M.size(); i++) {
        cout << M[i] << " -> ";
    }
    cout << endl;

    M.erase(3);
    M.erase(20);

    for(auto i = M.begin(); i != M.end(); i++) {
        cout << i->second << " -> ";
    }
    cout << endl;

    M.insert(pair<int, string> (-1, "Negativo"));
    M.insert(pair<int, string> (3, "Trezentos"));

    for(auto i:M) {
        cout << i.second << " -> ";
    }
    cout << endl;

    M.erase(M.begin(), M.find(4));

    for(auto i:M) {
        cout << i.second << " -> ";
    }
    cout << endl;
    cout << endl;

    map<int, string>::iterator it;
    
    it = M.find(3);
    
    if(it == M.end()) {
        cout << "Nao Encontrado" << endl;
    } else {
        cout << "Encontrado: " << it->second << endl;
    }

    M.clear();

    return 0;
}