class Solution {
public:
    vector<int> leftMaximum(vector<int>& arr, int n){
        vector<int> leftMax(n);
        leftMax[0]=arr[0];
        for(int i=1;i<n;i++){
            leftMax[i]=max(leftMax[i-1],arr[i]);
        }
        return leftMax;
    }
    vector<int> rightMaximum(vector<int>& arr, int n){
        vector<int> rightMax(n);
        rightMax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rightMax[i]=max(rightMax[i+1],arr[i]);
        }
        return rightMax;
    }
    int trap(vector<int>& arr) {
        int n=arr.size();
        int total = 0;
        vector<int> leftMax = leftMaximum(arr,n);
        vector<int> rightMax = rightMaximum(arr,n);
        for(int i=0;i<n;i++){
            total += min(leftMax[i],rightMax[i])-arr[i];
        }
        return total;
    }
};
