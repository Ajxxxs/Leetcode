class Solution {
public:

    void combination(vector<int> nums,vector<vector<int>>& ans,int idx){
        //base case
        if(idx>=nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            combination(nums,ans,idx+1);
            //backtracking
            swap(nums[idx],nums[i]);        
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int idx = 0;
        combination(nums,ans,idx);
    return ans;
    }
};