class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a= *max_element(nums.begin(),nums.begin()+i+1);
            int b= *min_element(nums.begin()+i,nums.end());
            int instability=a-b;
            if(instability<=k){
                return i;
            }
          
        }
        return -1;

    }
};