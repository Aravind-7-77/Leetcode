class Solution {
public:
    vector<string> v;
    void solve(int n,string s,int open,int close){
        if(open+close == 2*n){
            v.push_back(s);
            return;
        }
        if(open<n) solve(n,s+"(",open+1,close);
        if(close<open) solve(n,s+")",open,close+1);
        if(s.size()!=0) s.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        solve(n,"",0,0);
        return v;
    }
};