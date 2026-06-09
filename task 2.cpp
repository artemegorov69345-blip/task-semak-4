#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> V;
    int nV;
    cout << "Введите размер вектора (нечетное, >=3): ";
    if (!(cin >> nV) || nV < 3 || nV % 2 == 0) {
        cout << "Ошибка: введено некорректное число." << endl;
        return 1;
    }
    cout << "Введите " << nV << " чисел: ";
    for (int i = 0; i < nV; ++i) {
        int x;
        cin >> x;
        V.push_back(x);
    }

    deque<int> D;
    int nD;
    cout << "Введите размер дека (нечетное, >=3): ";
    if (!(cin >> nD) || nD < 3 || nD % 2 == 0) {
        cout << "Ошибка: введено некорректное число." << endl;
        return 1;
    }
    cout << "Введите " << nD << " чисел: ";
    for (int i = 0; i < nD; ++i) {
        int x;
        cin >> x;
        D.push_back(x);
    }

    list<int> L;
    int nL;
    cout << "Введите размер списка (нечетное, >=3): ";
    if (!(cin >> nL) || nL < 3 || nL % 2 == 0) {
        cout << "Ошибка: введено некорректное число." << endl;
        return 1;
    }
    cout << "Введите " << nL << " чисел: ";
    for (int i = 0; i < nL; ++i) {
        int x;
        cin >> x;
        L.push_back(x);
    }

    V.front() *= 2;
    V[V.size() / 2] *= 2;
    V.back() *= 2;

    D.front() *= 2;
    D[D.size() / 2] *= 2;
    D.back() *= 2;

    L.front() *= 2;
    auto it = L.begin();
    advance(it, L.size() / 2);
    *it *= 2;
    L.back() *= 2;

    cout << "Вектор: ";
    for_each(V.begin(), V.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;

    cout << "Дек: ";
    for_each(D.begin(), D.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;

    cout << "Список: ";
    for_each(L.begin(), L.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;

    return 0;
}