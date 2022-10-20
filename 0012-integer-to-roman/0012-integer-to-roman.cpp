class Solution {
public:
    string intToRoman(int nums)
    {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrds[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thds[]={"","M","MM","MMM"};
        
        return thds[nums/1000]+hrds[(nums%1000)/100]+tens[(nums%100)/10]+ones[nums%10];
    }
};