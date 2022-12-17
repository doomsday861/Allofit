class Solution {
public:
    bool isop(string c)
    {
        return (c=="+" or c=="-" or c=="*" or c=="/");
    }
    long long eval(string c, long long v1,long long v2)
    {
       if(c== "+")
                return v1+v2;
        if(c=="-")
                return v2-v1;
        if(c=="*")
                return v1*v2;
        if(c=="/")
                return v2/v1;
        return -1;
    }
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        long long ans = 0;
        for(int i =0; i < tokens.size();i++)
        {
            if(isop(tokens[i]))
            {
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                st.push(to_string(eval(tokens[i],stoll(s1),stoll(s2))));
            }
            else
                st.push(tokens[i]);
        }
        return stoi(st.top());
    }
};