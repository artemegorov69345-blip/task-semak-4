#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
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

    size_t n = min(V1.size(), V2.size());
    transform(V1.begin(), V1.begin() + n, V2.begin(), V2.begin(), multiplies<int>());

    for_each(V2.begin(), V2.begin() + n, [](int n) {
        cout << n << " ";
    });
    cout << endl;

    return 0;
}
