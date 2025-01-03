#include <bits/stdc++.h>
using namespace std;

int main() {
    string A, B; cin >> A >> B;

    for(auto& a : A) a = tolower(a);
    for(auto& b : B) b = tolower(b);

    if(A == B) cout << 0 << endl;
    else if(A < B) cout << -1 << endl;
    else cout << 1 << endl;
    return 0;
}
