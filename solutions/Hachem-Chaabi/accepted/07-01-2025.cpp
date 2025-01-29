#include <iostream>
using namespace std;
 
long a, b;
const int arr[] = {0,0,0,0,1,0,0,1,0,0};
 
long mask(long t){
    int d = 1;
    long res = 0;
    
    while(t) {
        int r = t % 10;
        if (arr[r]) {
            res += r * d;
            d *= 10;
        }
        t /= 10;
    }
    
    return res;
}
 
int main() {
    cin >> a >> b;
    a++;
    
    while (mask(a) != b) a++;
    
    cout << a << endl;
    
    return 0;
}
