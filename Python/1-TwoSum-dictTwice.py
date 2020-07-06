class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashtable = dict()
        for id, n in enumerate(nums):
            if n in hashtable.keys() and (nums[hashtable[n]] != n or n == target / 2):
                return [hashtable[n], id]
            else:
                hashtable[n] = id
                hashtable[target - n] = id
