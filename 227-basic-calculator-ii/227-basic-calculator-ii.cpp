class Solution {
public:
    int prec(char ch)
    {
    switch (ch) {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    }
    return -1;
    }
    string convert(string &s)
    {
        stack<int>st;
        string ans="";
        for(auto c:s)
        {
            if(c==' ')continue;
            if(isdigit(c))
            {
                ans+=c;
            }
            else
            {
                ans+='.';
                while(!st.empty() and prec(c)<=prec(st.top()))
                {
                    ans+=st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        ans+='.';
        while(!st.empty())ans+=st.top(),st.pop();
        return ans;
    }
    int calculate(string s) {
        string sr = convert(s);
        stack<int>st;
        string tmp="";
        for(int i=0;i<sr.length();i++)
        {
            if(isdigit(sr[i]))
            {
                tmp+=sr[i];
            }
            else if(sr[i]=='.')
            {
                if(tmp=="")continue;
                st.push(stoi(tmp));
                tmp="";
            }
            else
            {
                int f = st.top();
                st.pop();
                int s = st.top();
                st.pop();
                if(sr[i]=='*') st.push(f*s);
                if(sr[i]=='+') st.push(f+s);
                if(sr[i]=='-') st.push(s-f);
                if(sr[i]=='/') st.push(s/f);
            }
        }
        return st.top();
    }
};