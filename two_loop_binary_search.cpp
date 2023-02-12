#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    if (nums.size() < 3) return result;
    sort(nums.begin(), nums.end());
    set<pair<int, int>> visited;
    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < nums.size() - 1; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int target = 0 - nums[i] - nums[j];
 if (visited.count({nums[j], target})) continue;
            if (binary_search(nums.begin() + j + 1, nums.end(), target)) {
                result.push_back({nums[i], nums[j], target});
            }
            visited.insert({nums[j], target});
        }
    }
    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
	
	
	
	
	
