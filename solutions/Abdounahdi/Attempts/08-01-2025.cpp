#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++) 
#define PB push_back
typedef long long ll;

int main() {
    
    int numShirts ; 
    cin >> numShirts ; 
    
    vector<int> prices , fc , bc ;
    
    REP(i , 0 , numShirts ){
        int a; 
        cin >> a ; 
        prices.PB(a) ; 
    }
    
    REP(i , 0 , numShirts ){
        int a; 
        cin >> a ; 
        fc.PB(a) ; 
    }
    
    REP(i , 0 , numShirts ){
        int a; 
        cin >> a ; 
        bc.PB(a) ; 
    }
    
    int numBuyers ; 
    cin >> numBuyers ; 
    
    
    
    REP(i , 0 , numBuyers ) {
        int buyer ; 
        cin >> buyer ; 
        
        vector<int> poss ; 
        
        REP(i, 0 , fc.size() ) {
            if (buyer == fc[i] || buyer==bc[i]){
                poss.PB(prices[i]) ; 
            }
        }
        
        if (poss.size() == 0 ){
            cout << -1 << ' '; 
        }else{
            int least = *min_element(poss.begin(), poss.end()) ; 
            cout << least << ' ' ; 
            auto it = find(prices.begin(), prices.end(), least);
            int index =  distance(prices.begin(), it) ; 
            prices.erase(prices.begin() + index);
            fc.erase(fc.begin() + index);
            bc.erase(bc.begin() + index);
        }
        
        
    }
 
    
    
    
    
    return 0 ; 
}
