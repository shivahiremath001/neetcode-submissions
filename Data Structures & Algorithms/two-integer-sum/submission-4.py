class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i = 0

        while True:
            z = target - nums[i]

            if z in nums and nums.index(z) != i:
                return sorted([i, nums.index(z)])

            i += 1
        
        return -1