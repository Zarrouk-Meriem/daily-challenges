#define REP(i,a,b) for (int i = a; i < b; i++) 
#define PB push_back
typedef long long ll;

class Solution {
public:


    string formatTime(vector<int> mins , vector<int> hours){
        if ((mins.size()==0)&&(hours.size() == 0 )) return "0:00" ;
        
        string minutes ; 
        string hour ; 
        
        if (mins.size() == 0 ) {
            minutes="00" ; 
        }else{
            int sum = 0  ;
            for(int i= 0 ; i < mins.size() ; i++){
                sum+= mins[i]; 
            }
            string strSum = to_string(sum) ; 
            if (strSum.size()==1){
                minutes = "0"+strSum ; 
            }else{
                minutes = strSum ; 
            }
        }
        
        
        if (hours.size() == 0 ) {
            hour="0" ; 
        }else{
            int sum = 0  ;
            for(int i= 0 ; i < hours.size() ; i++){
                sum+= hours[i]; 
            }
            string strSum = to_string(sum) ;  
            hour=strSum ; 
        }
        
        
        return hour+":"+minutes ; 
            
    }


    void solve(int turnedOn , vector<int> mins , vector<int>hours , vector<int> minsChosen , vector<int> hoursChosen , vector<string> &solution ){
        if (turnedOn == 0 ){
            string sol = formatTime(minsChosen , hoursChosen);
            int cnt = count(solution.begin(), solution.end(), sol);
            if (cnt == 0){
                solution.push_back(sol); 
            }
            return ; 
        }

        for(int i = 0 ; i<mins.size() ; i++ ){
            int led = mins[i] ; 
            mins.erase(mins.begin() + i); 
            minsChosen.PB(led);  
            solve(turnedOn - 1 , mins , hours , minsChosen , hoursChosen , solution) ; 
            mins.insert(mins.begin() + i, led);
            minsChosen.pop_back();
        }
        for(int i = 0 ; i<hours.size(); i++ ){
            int led = hours[i] ; 
            hours.erase(hours.begin() + i); 
            hoursChosen.PB(led);  
            solve(turnedOn - 1 , mins , hours , minsChosen , hoursChosen , solution) ; 
            hours.insert(hours.begin() + i, led);
            hoursChosen.pop_back();
        }
    }
    

    
    

    vector<string> readBinaryWatch(int turnedOn) {
        if (turnedOn>8)return{} ; 
        vector<int> hours = {1 , 2 , 4 , 8}; 
        vector<int> mins = {1 , 2 , 4 , 8 , 16 , 32 }; 
        vector<string> solution ; 
    
        vector<int> minsChosen ; 
        vector<int> hoursChosen ; 
        solve(turnedOn , mins , hours , minsChosen , hoursChosen , solution ) ; 
        return solution ; 
    }
};
