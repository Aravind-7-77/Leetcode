class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i,vector<int> temp,vector<int> nums,int n){
        if(i==n) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i+1,temp,nums,n);
        temp.pop_back();
        solve(i+1,temp,nums,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        solve(0,{},nums,n);
        return ans;
    }
};