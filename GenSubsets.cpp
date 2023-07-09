//leetcode - generate all subsets possible from a given vector - medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<vector<int>> allSubsets;

    void generate(vector<int> &sub,int i,vector<int> &nums) {
        if(i == nums.size()) {
            allSubsets.push_back(sub);
            return ;
        }
        //don't consider the element
        generate(sub,i+1,nums);

        //consider the element
        sub.push_back(nums[i]);
        generate(sub,i+1,nums);

        //remove the changes
        sub.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        generate(sub,0,nums);
        return allSubsets;
    }
};

int main() {
    vector<int> v({1,2,3});
    Solution s;
    vector<vector<int>> allSubsets = s.subsets(v);
    for(auto sub : allSubsets) {
        for(auto ele : sub) {
            cout << ele << " ";
        }
        cout << "\n";
    }
}

