class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> num{ nums.begin(),nums.end()};
        for(int i=k;;i+=k){
            if(num.find(i)==num.end()){
                return i;
            }
        }
        
    }
};