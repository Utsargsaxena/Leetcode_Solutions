class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        for (char c : s)
            switch (c) {
                case '(':
                    S.push(')');
                    break;
                case '{':
                    S.push('}');
                    break;
                case '[':
                    S.push(']');
                    break;
                default:
                    if (S.size() == 0)
                        return false;
                    if (c != S.top())
                        return false;
                    S.pop();
                    break;
            }
        return S.size() == 0;
    }
};