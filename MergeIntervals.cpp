//https://leetcode.com/problems/merge-intervals/submissions/
//56. Merge Intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans; int l=intervals.size();
        vector<pair<int,int>> v;
        for(int i=0;i<l;i++){
            v.push_back(make_pair(intervals[i][0],intervals[i][1]));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<l-1;i++){
            if(v[i+1].first<=v[i].second && v[i+1].second<=v[i].second){
                v[i+1].first=v[i].first; v[i+1].second=v[i].second;
                v[i].first=v[i].second=-1; 
            }
            else if(v[i+1].first<=v[i].second && v[i].second<v[i+1].second){
                v[i+1].first=v[i].first; v[i].first=v[i].second=-1;
            }
        }
        for(int i=0;i<l;i++){
            if(v[i].first!=-1 && v[i].second!=-1){
                vector<int> t; t.push_back(v[i].first);
                t.push_back(v[i].second); ans.push_back(t);
            }
        }
        return ans;
    }
};
