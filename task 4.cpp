#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    vector<int> V1 = {1, 2, 3, 4, 5};
    vector<int> V2 = {1, 2, 3, 4, 5};

    transform(V1.begin(), V1.end(), V2.begin(), V2.begin(), multiplies<int>());

    for_each(V2.begin(), V2.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;

    return 0;
}