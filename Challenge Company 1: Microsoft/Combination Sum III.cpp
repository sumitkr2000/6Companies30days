class Solution {
private:
    void solve(int num, int &k, int n, vector<int> &curr, vector<vector<int>> &ans) {
        
        if(n == 0 && curr.size() == k) {
            ans.push_back(curr);
            return;
        }
        
        for(int i = num; i <= 9; i++) {
            curr.push_back(i);
            solve(i+1, k, n-i, curr, ans);
            curr.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> curr;
        vector<vector<int>> ans;
        
        solve(1, k, n, curr, ans);
        return ans;
    }
};
