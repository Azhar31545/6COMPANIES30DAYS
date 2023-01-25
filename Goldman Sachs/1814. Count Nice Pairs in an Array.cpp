class Solution {
public:
    int reverse(int num){
        int rev = 0;
        while(num>0){
            rev = rev*10 + num%10;
            num /=10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        int mod = 1e9+7;
        unordered_map<int,int> mp;

        for(int i=n-1;i>=0;i--){
            int diff = nums[i] - reverse(nums[i]);
            if(mp.count(diff)==true){
                res = (res+mp[diff]) % mod;
            }
            mp[diff]++;
        }
        return res;
    }
};
