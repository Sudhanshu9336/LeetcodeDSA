class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n=s.length();
        int maxc=0;
        for(int i=0;i<n;i++){
            Set<Character>set=new HashSet<>();
            for(int j=i;j<n;j++){
                if(set.contains(s.charAt(j))){
                    break;
                }
                set.add(s.charAt(j));
                maxc=Math.max(maxc,j-i+1);
            }
        }
        return maxc;
    }
}