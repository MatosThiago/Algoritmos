#include <bits/stdc++.h>

using namespace std;

int main() {

    // [Captura de Variáveis]
    // (Parâmetros)
    // {Corpo}

    auto Max = [](vector<int> V)->int {
        int M = 0;
        for(auto i:V) {
            M = i > M ? i : M;
        }
        return M;
    };

    cout << Max({10, 7, 1, 4, 45, 11, 20, 9}) << endl;

    int A = 10,
        B = 20,
        C = 30,
        D = 40;

    auto Sum = [A, B, C, D]()->auto {
        return A + B + C + D;
    };

    cout << Sum() << endl;

    // [=] = Todas as Variáveis do escopo = [A, B, C, D]

    auto SumMax = [=]()->int {
        return Max({1, 2, 3, 4, 5}) + Sum();
    };

    cout << SumMax() << endl;

    return 0;
}