class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     int mag[200];
        for(int i=0; i<200;i++)
        {
            mag[i]=0;
        }
        for(int i=0; i<magazine.length();i++)
        {
            mag[(int)magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            mag[(int)ransomNote[i]]--;
            if(  mag[(int)ransomNote[i]]<0)
                return false;
        }
        return true;
    }
};