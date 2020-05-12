class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       float x1 = (float)coordinates[0][0];
       float y1 = (float)coordinates[0][1];
       float x2 = (float)coordinates[1][0];
       float y2 = (float)coordinates[1][1];
       float slope=0.0;
   //     double rx = (1/-2);
  //      cout<<rx<<endl;
        if(x2-x1==0 || y2-y1==0)
            slope =0;
        else
        slope  = (x2-x1)/(y2-y1);
      cout<<slope <<endl;
        if(coordinates.size()==2)
            return true;
        for(int i=2;i<coordinates.size();i++)
        {  float x=0;
            int a = (float)coordinates[i][0];
            int b = (float)coordinates[i][1];
            if(a-x2==0 || b-y2==0)
                x=0;
            else
            x = (a-x2)/(b-y2);
     //  cout<< x<<endl;
            if(slope!=x)
                return false;
            x2 = a;
            y2=b;
            slope = x;
        }
        return true;
        }
};