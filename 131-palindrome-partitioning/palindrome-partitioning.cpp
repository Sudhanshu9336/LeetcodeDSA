class Solution {
public:
bool ispalindrome(string part){
    int i = 0;
    int r = part.size() - 1;
    while(i < r){
        if(part[i] != part[r]) return false;
        i++;
        r--;
    }
    return true;
}

void getpartion(string s, vector<string>& parti,vector<vector<string>>& ans){
    if(s.size() == 0){
        ans.push_back(parti);
        return;
    }

    for(int i = 0; i < s.size(); i++){
        string part = s.substr(0, i+1);
        if(ispalindrome(part)){
            parti.push_back(part);
            getpartion(s.substr(i+1), parti, ans);
            parti.pop_back(); 
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<string> part;
    vector<vector<string>> ans;
    getpartion(s, part, ans);
    return ans;
}
};
