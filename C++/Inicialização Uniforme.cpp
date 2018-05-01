#include <bits/stdc++.h>

using namespace std;

class Class {

    private:

    public:

        int N;
        string S;
};

struct Struct {
    string S;
    int N;
};

int main() {

    int N{10};
    string S{"String"};
    int Vt[]{5, 4, 3, 2, 1};

    vector<int> Vc{1, 2, 3, 4, 5};
    map<int, string> M{{1, "Um"}, {2, "Dois"}, {3, "Tres"}};

    Struct St{"Um", 1};
    Class Cl{10, "Dez"};
    
    cout << N << endl;
    cout << S << endl;
    for(int i = 0; i < 5; i++) {
        printf("%d ", Vt[i]);
    }
    cout << endl;

    for(auto it = Vc.begin(); it != Vc.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for(auto it = M.begin(); it != M.end(); it++) {
        cout << it->first << " " << it->second << "\t";
    }
    cout << endl;

    cout << St.S << " " << St.N << endl;
    cout << Cl.N << " " << Cl.S << endl;

    return 0;
}