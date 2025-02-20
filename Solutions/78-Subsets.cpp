class Solution {
public:

    void solve(vector<int> nums, vector<vector<int>> &sol,vector<int> out,int index){
        //base case 
        if(index>=nums.size()){
            sol.push_back(out);
            return;
        }

        //exclude
        solve(nums,sol,out,index+1);

        //include
        out.push_back(nums[index]);
        solve(nums,sol,out,index+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> sol;
    vector<int> out;
    int index = 0;

    solve(nums,sol,out,index);
    return sol;
    }
};