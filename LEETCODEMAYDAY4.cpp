class Solution {
public:
    long long findComplement(int num) {
        if(num==2)
            return 1;
        vector<int> com(33);
        int i=0;
       while(num)
       {
           com[i] = num%2;
           num /=2;
           i++;
       }
        string s="";
        for(int j=i-1;j>=0;j--)
        {   
    //       cout<<com[j];
            if(com[j])
                com[j] = 0;
            else
                com[j]=1;
            //char c = itoa(com[j]);
            s +=com[j]+'0';
        }
  //      cout<<endl;
//        cout<<s<<endl;
       int ans = stoi(s,0,2);
    return ans;
    }
};