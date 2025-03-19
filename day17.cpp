class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> v(150,1000);
        for (int i=0;i<s.length();i++) {
            int idx=(int)s[i];
            if (v[idx]==1000) v[idx]=s[i]-t[i];
            else if(v[idx]!=(s[i]-t[i])) return false;
        }
        for (int i=0;i<150;i++) {
            v[i]=1000;
        } 
         for (int i=0;i<t.length();i++) {
            int idx=(int)t[i];
            if (v[idx]==1000) v[idx]=t[i]-s[i];
            else if(v[idx]!=(t[i]-s[i])) return false;
        }
        return true;
    }
};

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> map1;
        unordered_map<char, char> map2;

        for (int i = 0; i < s.length(); i++) {
            char a = s[i];
            char b = t[i];

            if (map1.count(a)) {
                if (map1[a] != b) return false;
            } else {
                map1[a] = b;
            }

            if (map2.count(b)) {
                if (map2[b] != a) return false;
            } else {
                map2[b] = a;
            }
        }
        return true;
    }
};

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                if (!st.empty()) {
                    ans.push_back(s[i]);  
                }
                st.push(s[i]);
            }
            else if(s[i] == ')') {
                st.pop();
                if (!st.empty()) {
                    ans.push_back(s[i]);  
                }
            }
        }
        return ans;
    }
};
