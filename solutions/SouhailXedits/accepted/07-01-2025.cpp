#include <iostream>
#include <string>

using namespace std;

int compMask(int n) {
    string num = to_string(n);
    string mask = "";
    for (char d : num) {
        if (d == '4' || d == '7') {
            mask += d;
        }
    }
    return mask.empty() ? 0 : stoi(mask);
}

int findMinC(int a, int b) {
    int c = a + 1;
    while (true) {
        if (compMask(c) == b) {
            return c;
        }
        c++;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << findMinC(a, b) << endl;
    return 0;
}
