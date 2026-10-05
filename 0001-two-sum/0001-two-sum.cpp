class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<a.size();i++) mp[a[i]].push_back(i);
        sort(a.begin(),a.end());
        int l=0,n=a.size(),r=n-1;
        while(l<r){
            if(a[l]+a[r]==k) {
                break;
            }
            else if(a[l]+a[r]<k) l++;
            else r--;
        }
        if(a[l]==a[r]) return {mp[a[l]][0],mp[a[l]][1]};
        return {mp[a[l]][0],mp[a[r]][0]};
    }
};