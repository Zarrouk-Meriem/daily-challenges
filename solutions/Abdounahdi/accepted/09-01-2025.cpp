#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++) 
#define PB push_back
typedef long long ll;
 
int main(){
    
    int n , k , index = 0  , sum = 150000001 ; 
    cin >> n >> k ; 
    
    int fence[n+1] ; 
    fence[0] = 0 ;
    
    REP(i ,  1 , n + 1){
        int a ; 
        cin >> a ; 
        fence[i] = fence[i - 1] + a ; 
    }
    
    REP(i , k , n + 1) {
        if (sum > (fence[i]-fence[i-k])){
            sum = fence[i]-fence[i-k] ; 
            index = i  ;  
        }
    }
    
    cout << index - k + 1 ; 
    
    
    return 0 ; 
}
