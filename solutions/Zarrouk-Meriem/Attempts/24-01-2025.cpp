class Solution {
public:
void generateCases(vector<int> days,vector<int> costs, vector<int>&result){
    if (days.size()<7) {
        result.push_back((days.size()*costs.at(0))
        return;
    }else if (days.size()>=7&&days.size()<30) {
        result.push_back((days.size()/7*costs.at(1))
        return;
    }else if (days.size()>=30){
        result.push_back((days.size()/30*costs.at(2))
        if(days.size()%30==0) 
        return;
    }
}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>result;
        int first_cost=days.size()*costs.at(0);
        int second_cost=days.size()/7*costs.at(1);
        int third_cost=days.size()
        generateCases(vector<int>& days, vector<int>& costs,vector<int>&result);
        int min = *min_element(result.begin(), result.end());
        return min;
        
    }
};
