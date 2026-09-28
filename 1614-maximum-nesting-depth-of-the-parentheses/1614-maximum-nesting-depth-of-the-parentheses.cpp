class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans=0;
        for(auto ch:s){
            if(ch=='('){
                st.push('(');
            }
            else if(ch==')'){
                ans=max(ans,(int)st.size());
                st.pop();
            }
        }
        return ans;
    }
};