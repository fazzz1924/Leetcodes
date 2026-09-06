class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty()){
            return 0;
        } 
        int right=s.size()-1;
        int ans=0;
        while(s[right] == ' '){
            right--;
        }
        while(right>=0 && s[right]!=' '){
            ans+=1;
            right--;
        }
        return ans;
    }
};