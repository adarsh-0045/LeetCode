class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        n = len(nums)
        mp = {}

        for num in nums:
            mp[num] = mp.get(num, 0) + 1

        for key, value in mp.items():
            if value > n // 2:
                return key
                
        return -1