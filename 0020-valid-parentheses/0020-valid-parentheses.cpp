class Solution {
public:
    bool isValid(string s) {
        if(s.length()==1) return false;
        stack<char> st;
        for(char c : s){
            if(c=='(' || c=='{' || c=='[') st.push(c);
            else{
                if(st.empty()) return false;
                if(c==')' && st.top()=='(') st.pop();
                else if(c==']' && st.top()=='[') st.pop();
                else if(c=='}' && st.top()=='{') st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};