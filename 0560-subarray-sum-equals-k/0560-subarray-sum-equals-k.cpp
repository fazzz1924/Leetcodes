class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> sum;
        int prefixSum=0;
        int ans=0;
        sum[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            int need=prefixSum-k;
            if(sum.find(need)!=sum.end()){
                ans+=sum[need];
            }
            sum[prefixSum]++;
        }
        return ans;

    }
};