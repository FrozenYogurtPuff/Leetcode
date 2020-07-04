class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums_sort = sorted(nums)
        i = 0
        j = len(nums_sort) - 1
        while nums_sort[i] + nums_sort[j] != target:
            if nums_sort[i] + nums_sort[j] > target:
                j = j - 1
            elif nums_sort[i] + nums_sort[j] < target:
                i = i + 1
        a = nums.index(nums_sort[i])
        nums.pop(a)     # In case of Duplicate Key
        b = nums.index(nums_sort[j])
        if b >= a:
            b = b + 1
        return [a, b]