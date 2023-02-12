#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> res;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    res.push_back({ nums[i], nums[j], nums[k] });
                }
            }
        }
    }
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    return res;
}

int main() {
    vector<int> nums = { -1, 0, 1, 2, -1, -4 };
    vector<vector<int>> res = threeSum(nums);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << endl;
    }
    return 0;
}
