#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

// Умножает первый, средний и последний элементы контейнера на 2
template <typename Container>
void modifyMiddleElements(Container& c) {
    c.front() *= 2;
    auto it = c.begin();
    advance(it, c.size() / 2);
    *it *= 2;
    c.back() *= 2;
}

// Выводит контейнер на экран с подписью
template <typename Container>
void printContainer(const Container& c, const string& name) {
    cout << name << ": ";
    for_each(c.begin(), c.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;
}

int main() {
    vector<int> V;
    int nV;
    cout << "Введите размер вектора (нечетное, >=3): ";
    cin >> nV;
    cout << "Введите " << nV << " чисел: ";
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(V));

    deque<int> D;
    int nD;
    cout << "Введите размер дека (нечетное, >=3): ";
    cin >> nD;
    cout << "Введите " << nD << " чисел: ";
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(D));

    list<int> L;
    int nL;
    cout << "Введите размер списка (нечетное, >=3): ";
    cin >> nL;
    cout << "Введите " << nL << " чисел: ";
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(L));

    modifyMiddleElements(V);
    modifyMiddleElements(D);
    modifyMiddleElements(L);

    printContainer(V, "Вектор");
    printContainer(D, "Дек");
    printContainer(L, "Список");

    return 0;
}
