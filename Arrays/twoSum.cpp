class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back({nums[i],i});
        }
        int l=0,r=n-1;
        sort(begin(temp),end(temp));
        while(l<r){
            int sum = temp[l].first+temp[r].first;
            if(sum == target){
                ans.push_back(temp[l].second);
                ans.push_back(temp[r].second);
                break;
            }else if(sum < target){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};
