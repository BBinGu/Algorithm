class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer(2);
        unsigned long len = nums.size();
        
        for(int i=0;i<len;i++){
            int left = nums[i];
            for(int j=i+1;j<len;j++){
                if(left+nums[j]==target){
                    answer[0]=i;
                    answer[1]=j;
                    return answer;
                }
            }
        }
        return answer;
    }
};
