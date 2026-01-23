class Solution {
    public int numberOfSubstrings(String s) {
        int count=0;
        HashMap<Character,Integer>map=new HashMap<>();
        int n=s.length();
        for(int i=0;i<n;i++){
            //map[s[i]]=i+1;
            map.put(s.charAt(i),i+1);
            if(map.size()==3){
            //int mini=INT_MAX;
            int mini=Integer.MAX_VALUE;
            // for(auto it:map){
            // mini=min(mini,it.second);
            // }
             for(int it:map.values()){
            mini=Math.min(mini,it);
            }
            count=count+mini;
            }
        }
        
        return count;
    }
}