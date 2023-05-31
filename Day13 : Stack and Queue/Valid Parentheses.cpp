class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> sol= {{'(', -3} , {'{', -2}, {'[', -1}, {')', 3}, {'}', 2}, {']', 1}};
        stack<char> st;
        for(auto bkt : s)
        {
            if(sol[bkt]<0)
                {st.push(bkt);}
            else
            {
               if(st.empty())
                   return false;
                char top = st.top();
                st.pop();
                if(sol[top] + sol[bkt] !=0)
                    return false;
            }
        }
        if(st.empty())
            return true;
        else
            return false;
        
        
    }
};
