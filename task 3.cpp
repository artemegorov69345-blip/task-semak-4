#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
#include <limits>

using namespace std;

int main() {
    // Читаем поток от начала до конца — первый вектор
    vector<int> V1;
    cout << "Введите числа первого вектора (для завершения введите любую букву): ";
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(V1));

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Читаем поток от начала до конца — второй вектор
    vector<int> V2;
    cout << "Введите числа второго вектора (для завершения введите любую букву): ";
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(V2));

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

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
