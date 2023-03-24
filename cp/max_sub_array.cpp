class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        vector<int>p;
        int n=intervals.size();
       int i=0;
        int j=1;
        if(intervals[i][j]>intervals[i+1][j-1]){
            p.push_back(intervals[i][j-1]);
            p.push_back(intervals[i+1][j]);
                ans.push_back(p);
            i++;
            
        }
         if(intervals[i][j]<intervals[i+1][j-1])
            p.push_back(intervals[i][j-1]);
            p.push_back(intervals[i][j]);
             p.push_back(intervals[i+1][j-1]);
            p.push_back(intervals[i+1][j]);
            ans.push_back(p);
            i++;
        
            
        }
        return ans;
    }
};