class Solution {
public:
    int maximum69Number (int num) {
        string st = to_string(num);
        for(auto &x:st)
        {
            if(x=='6'){
                x='9';
                break;
            }
        }
        return stoi(st);
    }
};