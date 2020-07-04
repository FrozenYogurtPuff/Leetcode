class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashtable = dict()
        for i, num in enumerate(nums):
            if hashtable.get(target - num) is not None:
                return [i, hashtable.get(target - num)]
            hashtable[num] = i
