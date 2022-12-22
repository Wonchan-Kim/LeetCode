class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        
        int size1 = s.size();
        int size2 = t.size();
        
        char cmp1;
        char cmp2;
        
        for(int i = 0 ; i < size1; i++)
        {
            if(s1.empty() && s[i] == '#')
                continue;
            else if(s[i] == '#')
                s1.pop();
            else
                s1.push(s[i]);
        }
        for(int j = 0; j < size2 ; j++)
        {
            if(s2.empty() && t[j] == '#')
                continue;
            else if(t[j] == '#')
                s2.pop();
            else
                s2.push(t[j]);
        }
        if(s1.size() == s2.size())
        {
            while(!s1.empty())
            {
                cmp1 = s1.top();
                cmp2 = s2.top();
                if(cmp1 != cmp2)
                    return false;
                s1.pop();
                s2.pop();
            }
        }
        else
            return false;
        return true;
    }
};