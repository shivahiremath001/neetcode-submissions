class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i = 0

        while True:

            if target - nums[i] in nums and nums.index(target - nums[i]) != i:
                return sorted([i, nums.index(target - nums[i])])

            i += 1

        if i >= len(nums):
            return -1
