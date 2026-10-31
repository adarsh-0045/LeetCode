class Solution {
private:
    unordered_map<int, vector<int>> indices;
    mt19937 rng{random_device{}()};

public:
    Solution(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            indices[nums[i]].push_back(i);
        }
    }

    int pick(int target) {
        const auto& positions = indices[target];
        uniform_int_distribution<int> dist(0, positions.size() - 1);
        return positions[dist(rng)];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */