#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) cout << x << ' ';
    cout << '\n';
}

int main() {
    int size;
    cout << "enter the size = " << endl;
    if (!(cin >> size)) return 0;

    vector<int> arr;
    arr.reserve(size + 1);
    for (int i = 0; i < size; ++i) {
        int v; cin >> v;
        arr.push_back(v);
    }

    cout << "your array  = " << endl;
    printArray(arr);

    // append an element using push_back
    arr.push_back(23);

    cout << "your updated array  = " << endl;
    printArray(arr);

    return 0;
}