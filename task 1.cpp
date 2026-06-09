#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <string>
#include <functional>

using namespace std;

int main() {
    string name = "output.txt";

    ofstream out(name);

    if (!out.is_open()) {
        cerr << "Ошибка открытия файла!" << endl;
        return 1;
    }

    istream_iterator<char> start(cin), end;
    ostream_iterator<char> out_it(out, " ");

    copy(start, end, out_it);

    cout << endl;

    out.close();

    return 0;
}