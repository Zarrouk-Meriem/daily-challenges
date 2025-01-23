#define REP(i,a,b) for (int i = a; i < b; i++) 
#define PO pop_back
#define PB push_back
typedef long long ll;

class Solution {
public:
    void solve(int amount , vector<int>& coins , ll collect , int &res , vector<int>& subSol){
        
        if (collect == amount){
            if (subSol.size() < res){
                res = subSol.size() ; 
            }
            return ; 
        }
        
        if (collect > amount ) {
            return ; 
        }
        
        REP(i , 0 , coins.size()){
            subSol.PB(coins[i]);
            solve(amount , coins , collect+coins[i] , res , subSol) ; 
            subSol.PO();
        }

    }

    int coinChange(vector<int>& coins, int amount) {
            
        int res  = 9999999 ; 
        ll collect = 0 ; 
        vector<int> subSol ; 
            
        if (amount == 0 ){ return 0 ; } 
        else{
            solve(amount , coins , collect , res  , subSol) ; 
            if (res == 9999999 ){
                res = -1 ; 
            }
            return res ; 
        } 
    }
};
