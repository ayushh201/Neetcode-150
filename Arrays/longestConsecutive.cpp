class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        if(nums.size()==0) return 0;
        int streak = 1;
        for(int &num : nums){
            st.insert(num);
        }
        for(auto &it : st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x+=1;
                    cnt+=1;
                }
                streak = max(streak ,cnt);
            }
        }
        return streak ;
    }
};
