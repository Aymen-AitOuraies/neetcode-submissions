class Solution {
public:
    bool isValid(string s) {
        std::stack<char> bra;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
               bra.push(s[i]);
            } else if(!bra.empty()) {
                char c = bra.top();
                bra.pop();
                if ((s[i] == ')' && c != '(') ||
                    (s[i] == ']' && c != '[') ||
                    (s[i] == '}' && c != '{'))
                    return false;
            } else
                return false;
        }
        if(!bra.empty())
            return false;
        return true;
    }
};
