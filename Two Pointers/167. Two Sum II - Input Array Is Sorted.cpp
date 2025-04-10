class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        int l=0,r=n-1,sum=0;
        while(l<r){
            sum = arr[l]+arr[r];
            if(sum == target) return {l+1,r+1};
            else if(sum > target) r--;
            else l++;
        }
        return {};
    }
};
