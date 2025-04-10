class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1,maxArea=0;
        while(l<r){
            int w=r-l;
            int h=min(height[l],height[r]);
            maxArea=max(w*h,maxArea);
            if(height[l]>height[r]) r--;
            else {
                l++;
            }
        }
        return maxArea;
    }
};
