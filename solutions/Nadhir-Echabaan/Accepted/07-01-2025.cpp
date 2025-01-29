using namespace std; 
#include <iostream>
#include <string>
string Masked(int b) {
    string result = "";
    while(b > 0) {
        int digit = b % 10;
        if (digit == 7 || digit == 4) {
            result = char(digit + '0') + result;
        };
        b = b/10;
    };
    return result;
}
int main() {
    int a,b; 
    cin>>a>>b;
    int c = a + 1;
    while (Masked(c) != to_string(b)) {
        c++;
    }
    cout<<c;
    return 0;
}
