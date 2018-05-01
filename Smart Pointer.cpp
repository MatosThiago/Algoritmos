#include <bits/stdc++.h>

using namespace std;

class Class {

    private:

    public:

        int X = 7;
        void setX(int N) {
            this->X = N;
        }
        int getX() {
            return X;
        }
};

int main() {

    unique_ptr<int> P(new int); *P = 10;
    cout << &P << ": " << *P << endl;

    shared_ptr<int> Q(new int(20));
    shared_ptr<int> R = Q;
    cout << &R << ": " << *R << endl;
    cout << &Q << ": " << *Q << endl;

    unique_ptr<string> S(new string("String"));
    cout << &S << ": " << *S << endl;

    unique_ptr<Class> C(new Class);
    cout << &C << ": " << C->getX() << endl;
    


    return 0;
}