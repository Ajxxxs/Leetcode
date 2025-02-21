class Solution {
public:

    void solve(string digits,string out,int idx,vector<string>& sol,string mapp[]){
        //basee case
        if(idx>=digits.length()){
            sol.push_back(out);
            return;
        }

        int number = digits[idx] - '0';
        string value = mapp[number];

        for(int i=0;i<value.length();i++){
            out.push_back(value[i]);
            solve(digits,out,idx+1,sol,mapp);
            //removing single charachter using backtracking
            out.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {
        vector<string> sol;
        string out;
        int idx = 0;

        if(digits.length()==0){
            return sol;
        }
        
        string mapp[10] = {\\,\\,\abc\,\def\,\ghi\,\jkl\,\mno\,\pqrs\,\tuv\,\wxyz\}; 

        solve(digits,out,idx,sol,mapp);

    return sol;
    }
};