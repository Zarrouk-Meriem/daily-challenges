class Solution {
public:
    void backTrackDigits(int i , vector<string> mp , string partSol, vector<string> &sol , string digits) {
        
        if (i == digits.length()){
            sol.push_back(partSol) ; 
            return ; 
        }

        int index = digits[i] -'0' ; 
        string str = mp[index] ; 
        
        for ( int j = 0 ; j < str.length() ; j++ ){
            partSol = partSol + str[j] ; 
            backTrackDigits(i+1 , mp , partSol , sol , digits )  ;
            partSol.pop_back() ; 
        }
    
    }


    vector<string> letterCombinations(string digits) {

        vector<string> mp ={"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"} ; 
        
        string partSol = "" ; 
        vector<string> sol ; 
        
        if (digits.length() == 0 ){
            return sol;
        }
        
        backTrackDigits(0, mp , partSol , sol , digits ); 
        
        return sol ; 
    }
};

