//https://leetcode.com/problems/find-the-duplicate-number/
//287. Find the Duplicate Number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end()); int ans=0; int l=nums.size();
        for(int i=0;i<l-1;i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i]; break;
            }
        }
        return ans;
    }
};
