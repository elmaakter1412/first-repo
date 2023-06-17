#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> A_prime;
    for (int i = 0; i < N; i++) {
        if (A[i] != X) {
            A_prime.push_back(A[i]);
        }
    }

    for (int i = 0; i < A_prime.size(); i++) {
        cout << A_prime[i];
        if (i != A_prime.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
