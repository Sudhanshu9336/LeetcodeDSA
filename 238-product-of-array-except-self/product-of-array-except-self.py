class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n=len(nums)
        ans=[0]*n
        product=1
        count=0
        for x in nums:
           if x ==0:
               count=count+1

           else:
               product=product*x

        if count>1:
             return ans

        if count==1:
            for i in range(n):
                if nums[i]==0:
                   ans[i]=product
            return ans
 
        for i in range(n):
            ans[i]=product/nums[i]

        return ans



