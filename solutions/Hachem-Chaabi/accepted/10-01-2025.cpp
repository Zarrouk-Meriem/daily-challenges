class Solution {
public:
    vector<string> combinations(vector<string> &arr) {
        vector<string> mp = 
        {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> result;
        queue<string> q;
        q.push("");

        while (!q.empty()) {
            string prefix = q.front();
            q.pop();

            if (prefix.length() == arr.size()) {
                result.push_back(prefix);
            }
            else {
                string digit = arr[prefix.length()];
                if (digit < "2" || digit > "9") {
                    continue;
                }

                for (char letter : mp[stoi(digit)]) {
                    q.push(prefix + letter);
                }
            }
        }

        return result;
    }

    vector<string> letterCombinations(string digits) {
        vector<string> input;
        if(digits == "") return input;

        for(int i = 0; i < digits.size(); i++) {
            string str;
            str.push_back(digits[i]);
            input.push_back(str);
        }
        return combinations(input);
    }
};
