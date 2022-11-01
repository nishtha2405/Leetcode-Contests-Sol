class Solution {
public:
    int averageValue(vector<int>& nums) {
        int c=0, s=0, avg; 
        for(int i=0;i<nums.size();i++){
            if(nums[i]%6==0){
                s+=nums[i];
                c++;
            }
        }
        if(c==0)
            return 0;
        return s/c;
    }
};
