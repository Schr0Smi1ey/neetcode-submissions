class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto ch : s) {
            if(st.empty() && (ch == ')' || ch == '}' || ch == ']'))
                return false;
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                if(ch == ')' && st.top() != '(') 
                    return false;
                if(ch == '}' && st.top() != '{') 
                    return false;
                if(ch == ']' && st.top() != '[') 
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
