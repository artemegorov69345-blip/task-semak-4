#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    // Ввод первого вектора с клавиатуры
    int n1;
    cout << "Введите размер первого вектора: ";
    cin >> n1;
    vector<int> V1;
    cout << "Введите " << n1 << " чисел: ";
    for (int i = 0; i < n1; ++i) {
        int x;
        cin >> x;
        V1.push_back(x);
    }

    // Ввод второго вектора с клавиатуры
    int n2;
    cout << "Введите размер второго вектора: ";
    cin >> n2;
    vector<int> V2;
    cout << "Введите " << n2 << " чисел: ";
    for (int i = 0; i < n2; ++i) {
        int x;
        cin >> x;
        V2.push_back(x);
    }

    // Дальше всё остаётся без изменений
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
