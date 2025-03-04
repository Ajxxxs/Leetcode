class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int csum = 100000;
        sort(nums.begin(),nums.end());

        for(int k=0;k<n;k++){
            int i=k+1, j=n-1;
            while(i<j){
                int sum = nums[i]+ nums[j] + nums[k];
                if(abs(target - sum) < abs(target-csum)){
                    csum = sum;
                }
                if(sum< target){
                    i++;
                }else{
                    j--;
                }
            }
        }
    return csum;
    }
};