class Solution {
public:
    vector<vector<int>> ans;
    void genP(vector<int>&nums,vector<int>temp,vector<bool>&vis){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                temp.push_back(nums[i]);
                vis[i]=true;
                genP(nums,temp,vis);
                temp.pop_back();
                vis[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> vis(nums.size(),false);
        genP(nums,{},vis);
        return ans;
    }
};