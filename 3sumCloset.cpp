class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         int res=0;
         int diff = INT_MAX; 
    int minDiff = INT_MAX;
         sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
                int high=nums.size()-1;
                int low=i+1;
                 while(low < high){
                int sum = nums[i] + nums[low] + nums[high];
                if(sum == target) return target;
                else if(abs(sum - target) < diff){
                    diff = abs(sum - target);
                    res = sum;
                }
                else if(abs(sum - target) == diff){
                    res = max(res, sum);
                }
                
                if(sum < target) low++;
                else high--;
            }
        }
        return res;
    }
};
