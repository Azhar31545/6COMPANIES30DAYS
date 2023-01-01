class Solution {
public:
    vector<vector<int>> ans;
    void help(int i,int t,vector<int>&sol,int k){
        if(t==0 && k==0){
            ans.push_back(sol);
           return;
        }
        if(t<0 || k<0){
            return;
        }
        if(i==10){
            return;
        }
        help(i+1,t,sol,k);

        sol.push_back(i);
        help(i+1,t-i,sol,k-1);

        sol.pop_back();
    }
    vector<vector<int>> combinationSum3(int k, int t) {
        vector<int> sol;
        help(1,t,sol,k);
        return ans;
    }
};
