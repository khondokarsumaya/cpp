#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;

    int t_dis = 0;
    int a_dis = 0;

    for (int i = 0; i < X; ++i) {
        if (i % (A + C) < A)
            t_dis += B;
        if (i % (D + F) < D)
            a_dis += E;
    }

    if (t_dis> a_dis)
        cout << "Takahashi" << endl;
    else if (a_dis > t_dis)
        cout << "Aoki" << endl;
    else
        cout << "Draw" << endl;

    return 0;
}