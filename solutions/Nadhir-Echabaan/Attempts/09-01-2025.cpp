using namespace std; 
#include <iostream>
#include <vector>

int main() {
    int n,piano; 
    cin>>n>>piano;
    vector<int> planks(n);
    for (int i = 0; i<n ; i++) {
        cin>>planks.at(i); 
    }
    int index  = 0; 
    int height = 0; 
    for (int i = 0 ; i<n - piano + 1; i++) {
        int TempHeight = 0;
        int j = 0;
        while(j != piano ) {
            TempHeight += planks.at(i+j);
            j++;
        }
        if (i == 0) height = TempHeight;
        if (TempHeight < height) {
            index = i;
            height = TempHeight;
        }
    }
    cout<<index + 1;
    return 0;
}
