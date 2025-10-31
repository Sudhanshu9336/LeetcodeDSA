class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>map;
        for(auto val:arr){
            map[val]++;
        }
    set<int>set;
    for(auto it:map){
        if(set.count(it.second)){
            return false;
        }
        else{
            set.insert(it.second);
        }
    }
    return true;
    }
};