class Solution(object):
    def longestCommonPrefix(self, strs):
        ans = ""
     
        count = float('inf')
        for s in strs:
            count = min(count, len(s))
     
        for i in range(count):
            ch = strs[0][i]
            for j in range(1, len(strs)):
                if strs[j][i] != ch:
                    return ans
            ans += ch
        
        return ans
