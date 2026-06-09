#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    vector<int> V1 = {1, 2, 2, 3, 5};
    vector<int> V2 = {2, 3, 3, 4, 6};

    multiset<int> M1(V1.begin(), V1.end());
    multiset<int> M2(V2.begin(), V2.end());
    multiset<int> M;

    set_union(M1.begin(), M1.end(),
              M2.begin(), M2.end(),
              inserter(M, M.begin()));

    for_each(M.begin(), M.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;

    return 0;
}