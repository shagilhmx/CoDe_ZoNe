bool isValid(string s) {
        unordered_map<char,char> m;
        m['('] = ')',m['{'] = '}',m['['] = ']';
        stack<char>strs1;
        int len = s.length();
        if(len%2 != 0)
            return false;
        else{
            for(int i=0;i<len;i++){
                if(s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '[')
                    strs1.push(m[s.at(i)]);
                else if((s.at(i) == ')' || s.at(i) == '}' || s.at(i) == ']') && strs1.empty() == true){
                    strs1.push(0);
                    break;
                }
                else if(strs1.top() == s.at(i))
                    strs1.pop();
                else
                    strs1.push(m[s.at(i)]);
            }
        }
        if(strs1.empty())
            return true;
        else
            return false;
    }
