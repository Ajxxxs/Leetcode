class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> sol;
        sort(nums.begin(),nums.end());

        if(n<3) return sol;

        for(int k=0;k<n;k++){
            if(k>0 && nums[k]== nums[k-1]){
                continue;
            }
            int f = -nums[k];
            int i=k+1, j=n-1;

            while(i<j){
                int sum = nums[i]+nums[j];
                if(sum >f){
                    j--;
                }else if(sum < f){
                    i++;
                }else{
                    while(i<j && nums[i]==nums[i+1]) i++;
                    while(i<j && nums[j]==nums[j-1]) j--;

                    sol.push_back({-f,nums[i],nums[j]});
                        i++;
                        j--;
                }
            }
        }

    return sol;
    }
};