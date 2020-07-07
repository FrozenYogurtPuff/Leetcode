class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        std::unordered_map<int, int>::iterator it;
        for (std::size_t id = 0; id < nums.size(); ++id) {
            if ((it = map.find(nums[id])) != map.end() \
                && (nums[it->second] != nums[id] || nums[id] == target / 2.)) {
                    int array[2] = {(int) id, it->second};
                    return vector<int>(array, array + 2);
                }
            else if (map.find(nums[id]) == map.end()) {
                map.insert(std::make_pair(nums[id], id));
                map.insert(std::make_pair(target - nums[id], id));
            }
        }
        return vector<int>();
    }
};